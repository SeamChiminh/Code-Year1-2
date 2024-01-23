#include<iostream>
#include<conio.h>
using namespace std;


struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* start = NULL;
Node* avail = NULL;

void addNode(int val) {
    // Step 1: Check for overflow
    if (avail == NULL) {
        std::cout << "Overflow" << std::endl;
        return;
    }
    // Step 2: Assign the available node to the new node
    Node* new_node = avail;
    // Step 3: Update the available node pointer
    avail = avail->next;
    // Step 4: Set the data of the new node
    new_node->data = val;
    // Step 5: Set the previous pointer of the new node to NULL
    new_node->prev = NULL;
    // Step 6: Set the next pointer of the new node to the start node
    new_node->next = start;
    // Step 7: Set the previous pointer of the start node to the new node
    if (start != NULL) {
        start->prev = new_node;
    }
    // Step 8: Set the start node to the new node
    start = new_node;
}

int main() {
    // Initialize the available nodes
    Node nodes[10];
    for (int i = 0; i < 10; i++) {
        nodes[i].next = &nodes[i+1];
    }
    nodes[9].next = NULL;
    avail = &nodes[0];

    // Test the addNode function
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);

    // Print the contents of the list
    Node* current_node = start;
    while (current_node != NULL) {
        std::cout << current_node->data << " ";
        current_node = current_node->next;
    }
    std::cout << std::endl;

    return 0;
}