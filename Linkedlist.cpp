#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Singly Linked List
class SNode {
public:
    int data;
    SNode* next;

    SNode(int d) {
        data = d;
        next = NULL;
    }
};

//Doubly Linked List
class DNode {
public:
    int data;
    DNode* next;
    DNode* prev;

    DNode(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

// Singly Linked List
class SinglyLinkedList {
private:
    SNode* head;

public:
    SinglyLinkedList() {
        head = NULL;
    }

    // Insert node at beginning
    void insertAtBeginning() {
        int data;
        cout << "\n\nEnter Node Data: ";
        cin >> data;

        SNode* newNode = new SNode(data);

        if (head == NULL) {
            head = newNode;
            cout << "\nNode Successfully Inserted at Beginning\n";
            cout << "\nFirst Node Created!";
        } else {
            newNode->next = head;
            head = newNode;
            cout << "\nNode Successfully Inserted at Beginning\n";
        }
    }
    // Traversing
    void traverse() {
        if (head == NULL) {
            cout << "\n\nLinkedlist is empty...\n";
            return;
        }

        cout << "\n\nLinked List Elements: ";
        SNode* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Delete node from end
    void deleteFromEnd() {
        if (head == NULL) {
            cout << "\n\nLinkedlist is empty...\n";
            return;
        }

        if (head->next == NULL) {
            cout << "\nNode deleted: " << head->data << "\n";
            delete head;
            head = NULL;
            cout << "\nLinkedlist is now empty!";
            return;
        }

        SNode* temp = head;
        SNode* prev = NULL;

        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        cout << "\nNode deleted: " << temp->data << "\n";
        delete temp;
    }

    // Destructor
    ~SinglyLinkedList() {
        SNode* current = head;
        SNode* next;

        while (current != NULL) {
            next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
    }
};

// Doubly Linked List
class DoublyLinkedList {
private:
    DNode* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // Insert node at beginning
    void insertAtBeginning() {
        int data;
        cout << "\n\nEnter Node Data: ";
        cin >> data;

        DNode* newNode = new DNode(data);

        if (head == NULL) {
            head = newNode;
            cout << "\nNode Successfully Inserted at Beginning\n";
            cout << "\nFirst Node Created!";
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            cout << "\nNode Successfully Inserted at Beginning\n";
        }
    }
    // Traversing
    void traverse() {
        if (head == NULL) {
            cout << "\n\nLinkedlist is empty...\n";
            return;
        }

        cout << "\n\nLinked List Elements: ";
        DNode* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
 // Delete node from end
    void deleteFromEnd() {
        if (head == NULL) {
            cout << "\n\nLinkedlist is empty...\n";
            return;
        }

        if (head->next == NULL) {
            cout << "\nNode deleted: " << head->data << "\n";
            delete head;
            head = NULL;
            cout << "\nList is now empty!";
            return;
        }

        DNode* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        cout << "\nNode deleted: " << temp->data << "\n";
        delete temp;
    }

    // Destructor
    ~DoublyLinkedList() {
        DNode* current = head;
        DNode* next;

        while (current != NULL) {
            next = current->next;
            delete current;
            current = next;
        }
        head = NULL;
    }
};

//display Linked List operations menu
void displayOperationsMenu() {
    cout << "\n\n~Linked List Operations\n";
    cout << "1. Insert Node at Beginning\n";
    cout << "2. Delete Node from End\n";
    cout << "3. Traverse the Linked List\n";
    cout << "4. Exit to main menu\n";
    cout << "\n";
    cout << "Choose any operation-- ";
}

//handling Singly Linked List operations
void handleSinglyLinkedList() {
    SinglyLinkedList list;
    char choice;

    while (1) {
        system("cls");
        cout << "-\Singly Linked List-\n";
        displayOperationsMenu();

        choice = _getch();

        switch (choice) {
            case '1':
                list.insertAtBeginning();
                break;
            case '2':
                list.deleteFromEnd();
                break;
            case '3':
                list.traverse();
                break;
            case '4':
                return;
            default:
                cout << "\n\nInvalid Option!\n";
        }

        cout << "\n\nIf you want to continue with Singly Linked List operations, press 1 else press any key--";
        choice = _getch();
        if (choice != '1') {
            return;
        }
    }
}

// handling Doubly Linked List operations
void handleDoublyLinkedList() {
    DoublyLinkedList list;
    char choice;

    while (1) {
        system("cls");
        cout << "-Doubly Linked List-\n";
        displayOperationsMenu();

        choice = _getch();

        switch (choice) {
            case '1':
                list.insertAtBeginning();
                break;
            case '2':
                list.deleteFromEnd();
            case '3':
                list.traverse();
                break;
            case '4':
               return;
            default:
                cout << "\n\nInvalid Option!\n";
        }

        cout << "\n\nIf you want to continue with Doubly Linked List operations, press 1 else press any key";
        choice = _getch();
        if (choice != '1') {
            return;
        }
    }
}

// Main menu
int main() {
    char choice;

    while (1) {
        system("cls");
        cout << "~Linked List Project~\n\n";
        cout << "1. Singly Linked List\n";
        cout << "2. Doubly Linked List\n";
        cout << "3. Exit\n\n";
        cout << "Enter your choice: ";

        choice = _getch();

        switch (choice) {
            case '1':
                handleSinglyLinkedList();
                break;
            case '2':
                handleDoublyLinkedList();
                break;
            case '3':
                cout << "\n\nExiting Program.\n";
                return 0;
        }

        cout << "\n\nIf you want to continue with the program, press 1, else press any key to exit-- ";
        choice = _getch();
        if (choice != '1') {
            cout << "\n\nExiting Program. Thank you!\n";
            return 0;
        }
    }

    return 0;
}
