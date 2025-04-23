#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node*);

int main(int argc, char* argv[])
{
    Node* head = nullptr;

    Node* node1 = new Node({42, nullptr});
    head = node1;

    Node* node2 = new Node({15, nullptr});
    Node* node3 = new Node({23, nullptr});

    head->next = node2;
    head->next->next = node3;

    // cout << head->data << " " << head->next->data << " " << head->next->next->data << endl;

    // cout << curNode->data << endl;
    printList(head);

    return 0;
}

void printList(Node* head)
{
    Node* curNode = head;
    while (curNode != nullptr)
    {
        cout << curNode->data << " ";
        curNode = curNode->next;
    } 
    cout << endl;
}