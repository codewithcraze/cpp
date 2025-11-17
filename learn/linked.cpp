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

// Insert Node.
void insertNode(Node*& head, int value){
    Node *newNode = new Node(value);
    if (head == nullptr){
        head = newNode;
    }
    else{
        Node *temp = head;
        while (temp->next != nullptr){
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

void remove_duplicate(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
            temp = temp->next;
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{

    Node *head = nullptr;
    Node *head2 = nullptr;

    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 4);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 6);

    insertNode(head2, 1);
    insertNode(head2, 2);
    insertNode(head2, 3);
    insertNode(head2, 4);
    insertNode(head2, 4);
    insertNode(head2, 5);
    insertNode(head2, 6);
    insertNode(head2, 6);

    // Remove Duplicate Elements.
    remove_duplicate(head);

    printNode(head);

    return 0;
}