#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node*);
// Node* append(Node*, int);
void append(Node**, int);
void insert(Node**, int);
void deleteList(Node*);

int main(int argc, char* argv[])
{
    Node* head = nullptr;

    // head = append(head, 42);
    // head = append(head, 15);
    // head = append(head, 23);
    // head = append(head, 9000);
    insert(&head, 42);
    // printList(head);
    insert(&head, 15);
    insert(&head, 23);
    insert(&head, 9000);

    // Node* node1 = new Node({42, nullptr});
    // head = node1;

    // Node* node2 = new Node({15, nullptr});
    // Node* node3 = new Node({23, nullptr});

    // head->next = node2;
    // head->next->next = node3;

    // cout << head->data << " " << head->next->data << " " << head->next->next->data << endl;

    // cout << curNode->data << endl;
    printList(head);

    deleteList(head);
    return 0;
}

void insert(Node** head, int data)
{
    Node* curNode = *head;
    Node* newNode = new Node({data, nullptr});
    cout << "Node: " << newNode << endl;
    if(curNode == nullptr)
    {
        *head = newNode;
        return;
    }

    while(curNode->next != nullptr && curNode->data < data)
    {
        curNode = curNode->next;
    }

    if(curNode->data > data)
    {
        newNode->next = curNode;
        *head = newNode;
    }
    else if(curNode->data < data && curNode->next == nullptr)
    {
        curNode->next = newNode;
    }
    else if(curNode->data < data && curNode->next->data > data)
    {
        // insert after curNode
        newNode->next = curNode->next;
        curNode->next = newNode;
    }
    printList(*head);
}

void deleteList(Node* head)
{
    while(head != nullptr)
    {
        Node* curNode = head;
        cout << "Delete: " << curNode << endl;
        head = head->next;
        delete curNode;
    }
}

void append(Node** head, int data)
{
    Node* curNode = *head;
    Node* newNode = new Node({data, nullptr});
    cout << "Node: " << newNode << endl;
    if(curNode == nullptr)
    {
        // list empty
        *head = newNode;
    }
    else
    {
        while(curNode->next != nullptr)
        {
            curNode = curNode->next;
        }
        curNode->next = newNode;
    }
    // return head;
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