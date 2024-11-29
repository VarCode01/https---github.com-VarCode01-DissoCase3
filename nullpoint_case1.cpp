#include <iostream>
using namespace std;

// Define a Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to print the data of the first node in the linked list
void printFirstNodeData(Node* head) {
    cout << "The first node contains: " << head->data << endl; // Vulnerable to null pointer dereference
}

int main() {
    Node* head = nullptr; // Initialising an empty linked list (head is null)

    // Attempt to print the first node's data
    cout << "Attempting to print the first node's data..." << endl;
    printFirstNodeData(head);  // This will cause undefined behaviour due to null pointer dereferencing

    return 0;
}