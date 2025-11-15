#include <iostream>
using namespace std;

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
    } else {
        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printNode(Node *head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// ✅ Recursive Reverse
Node* reverseR(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head; 
    Node* newHead = reverseR(head->next);
    head->next->next = head;  
    head->next = nullptr;     
    return newHead;
}

int main(){
    Node* head = nullptr;
    insertOne(head, 1);
    insertOne(head, 2);
    insertOne(head, 3);
    insertOne(head, 4);
    insertOne(head, 5);
    head = reverseR(head);   
    printNode(head);    
}





/*


reverseR(1)
│
├── reverseR(2)
│   │
│   ├── reverseR(3)
│   │   │
│   │   ├── reverseR(4)
│   │   │   │
│   │   │   ├── reverseR(5)
│   │   │   │     └── returns 5
│   │   │   │
│   │   │   └── build: 5 → 4 → null
│   │   │         return 5
│   │   │
│   │   └── build: 5 → 4 → 3 → null
│   │         return 5
│   │
│   └── build: 5 → 4 → 3 → 2 → null
│         return 5
│
└── build: 5 → 4 → 3 → 2 → 1 → null
      return 5



      */