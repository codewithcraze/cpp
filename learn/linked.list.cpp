// Linked List Implementation.

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void insertNode(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printNode(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void updateNode(Node*& head, int current, int updatedValue)
{

    cout << endl;
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == current)
        {
            temp->data = updatedValue;
            return;
        }
        temp = temp->next;
    }
}

void deleteNode(Node*& head, int data){
    cout << endl;
    Node* temp = head;
    while(temp != nullptr){
        if(temp->next->data == data){ // Comparison
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return;
        }
        temp = temp->next;
    }
}

Node* reverse(Node*& head){
   Node* prev = nullptr;
   Node* curr = head;

   while(curr != nullptr){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
   }

   return prev;
}


void middleOfLinkedList(Node *& head){
    if (head == nullptr) {
        cout << "List is empty";
        return;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}

// Make loop.
void makeLoop(Node* head, int position){
    if (head == nullptr || position == 0) return;

    Node* loopPoint = head;   // Node where loop will begin
    Node* temp = head;        // Last node pointer
    int count = 1;

    // Find the node at given position
    while (count < position && loopPoint != nullptr) {
        loopPoint = loopPoint->next;
        count++;
    }

    // Go to last node
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Create loop
    temp->next = loopPoint;
}

bool detectLoop(Node*& head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
}


int main()
{
    Node *head = nullptr;

    // Create.
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 15);
    insertNode(head, 55);
    insertNode(head, 65);
    insertNode(head, 75);
    makeLoop(head, 4);

    cout << "Is Loop Detected" << endl;
    cout << detectLoop(head);

    // Loop Detection.


    // // Read.
    // printNode(head);

    // // Update.
    // updateNode(head, 4, 10);

    // // Read Again to See Changes
    // printNode(head);

    // // Delete a particular Node.
    // deleteNode(head, 10);

    // // Read Again to See Changes
    // printNode(head);
    // Node* reverseList = reverse(head);
    // cout << endl;
    // printNode(reverseList);

    // cout << "Middle Element" << endl;
    // middleOfLinkedList(reverseList);
    // Loop Detection Algorithm. 


    return 0;
}