# Linked List Project (C++)

This project is a console-based C++ implementation of **Singly Linked List** and **Doubly Linked List** operations.
It was developed as part of a data structures learning exercise, with an emphasis on understanding how linked lists work internally.

The program runs in the terminal and offers a menu-driven interface where the user can choose between singly and doubly linked lists and perform various operations.

---

## Features

### Common Capabilities

* Menu-based navigation for both singly and doubly linked lists
* Basic node creation and deletion
* Traversal to view list contents
* Separate handling of memory cleanup using destructors

### Singly Linked List

* Insert a node at the beginning
* Delete a node from the end
* Display all elements

### Doubly Linked List

* Insert a node at the beginning
* Delete a node from the end
* Display all elements with both forward and backward links

---

## Technologies Used

* **Language:** C++
* **Compiler:** Any C++11-compatible compiler
* **Libraries:**

  * `<iostream>` for input/output
  * `<conio.h>` for getch-based menu interaction (Windows specific)
  * `<stdlib.h>` for `system("cls")`

---

## How to Compile and Run

1. Save the code in a file, for example:

   ```
   LinkedListProject.cpp
   ```

2. Open a terminal/command prompt and navigate to the file’s directory.

3. Compile the program:

   ```
   g++ LinkedListProject.cpp -o LinkedListProject
   ```

4. Run the executable:

   ```
   LinkedListProject
   ```

---

## Project Structure

* **SNode & DNode Classes** – Node structures for singly and doubly linked lists.
* **SinglyLinkedList Class** – Contains operations for inserting, deleting, and traversing a singly linked list.
* **DoublyLinkedList Class** – Similar to `SinglyLinkedList` but with an extra `prev` pointer for bidirectional linking.
* **Menu Functions** – Handle user interaction and call appropriate linked list operations.

---

## Notes

* The program uses `system("cls")` and `<conio.h>`, so it is intended for Windows.
* The `_getch()` function is used for smoother menu navigation without requiring the Enter key.
* All dynamic memory is freed upon exit to avoid leaks.
