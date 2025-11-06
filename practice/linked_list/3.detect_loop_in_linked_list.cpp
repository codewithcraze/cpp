#include <iostream>
using namespace std;

// Problem 1. Reverse a Linked List.






struct Node{
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
void insertOne(Node *& head, int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
    }else{
        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void printNode(Node *& head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = nullptr;
    insertOne(head, 1);
    insertOne(head, 2);
    insertOne(head, 3);
    insertOne(head, 4);
    insertOne(head, 5);
    printNode(head);    
}