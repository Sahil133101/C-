#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Function to print node data and address
    void printNode() {
        cout << "Data: " << data << ", Address: " << (void*)this << endl;
    }
};

// Function to insert a new node at the head of the linked list
void insertAtHead(Node*& head, int newData) {
    Node* newNode = new Node(newData);  // Create a new node with the given data
    newNode->next = head;                // Make the new node point to the current head
    head = newNode;                      // Update the head pointer to point to the new node
}

// Function to print the linked list with data and addresses
void printList(Node* head) {
    while (head != NULL) {
        head->printNode();
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // Initially, the linked list is empty

    // Create node1 with data 10
    Node* node1 = new Node(10);

    // Set head to point to node1
    head = node1;

    cout << "Original list:" << endl;
    printList(head);

    // Insert node with data 12 at the head
    insertAtHead(head, 12);

    cout << "List after insertion:" << endl;
    printList(head);

    return 0;
}
