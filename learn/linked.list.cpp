#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

// Call by value, Call by Reference.
void insertNumber(Node*& head, int data){
    
        Node* newNode = new Node(data);
        cout << newNode->data;
    
    if(head == nullptr){
        head = newNode;
    }
}     



int main(){
    Node* head  = nullptr;

    // Create
    insertNumber(head, 1);
    insertNumber(head, 2);
    insertNumber(head, 3);
    insertNumber(head, 4);
    insertNumber(head, 5);
    // Read 
    // Update
    // Delete
    
    return 0;
}

