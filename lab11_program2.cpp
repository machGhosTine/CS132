// **********************************************
// CS132 LAB #11
// Justin Middagh - 5/6/21
// PROGRAM-NAME: Lab11_Program2
// This program will create a linked list with three names,
// Outputs in order all names in the list, inserts the name “Joshua”
// in the list after “James” then outputs the modified list. Then
// deletes the node with “Joules” then outputs the modified list.
// Finally, deletes all nodes in the list.
//**********************************************

#include <iostream>
using namespace std;

struct Node
{
    string name;
    Node *link;
};

typedef Node *NodePtr;

int main(int argc, char **argv)
{
    NodePtr listPtr, tempPtr;
    listPtr = new Node;
    listPtr->name = "Emily";
    tempPtr = new Node;
    tempPtr->name = "James";
    listPtr->link = tempPtr;
    tempPtr->link = new Node;
    tempPtr = tempPtr->link;
    tempPtr->name = "Joules";
    tempPtr->link = NULL;
    tempPtr = listPtr;

    while (listPtr != NULL)
    {
        cout << listPtr->name << endl;
        listPtr = listPtr->link;
    }

    listPtr = tempPtr;

    while (listPtr->name != "James")
    {
        listPtr = listPtr->link;
    }
    NodePtr newNode;
    newNode = new Node;
    newNode->name = "Joshua";
    newNode->link = listPtr->link;
    listPtr->link = newNode;

    cout << "First modified list (Inserted the name Joshua in the list after James): " << endl;
    listPtr = tempPtr;

    while (listPtr != NULL)
    {
        cout << listPtr->name << endl;
        listPtr = listPtr->link;
    }

    listPtr = tempPtr;

    while (listPtr->link->name != "Joules")
    {
        listPtr = listPtr->link;
    }
    listPtr->link = listPtr->link->link;

    cout << "Second modified list (deleted Joules): " << endl;
    listPtr = tempPtr;

    while (listPtr != NULL)
    {
        cout << listPtr->name << endl;
        listPtr = listPtr->link;
    }

    listPtr = tempPtr;
    NodePtr next;
    next = new Node;

    while (listPtr != NULL)
    {
        next->link = listPtr->link;
        listPtr->link = NULL;
        listPtr = next->link;
    }

    if (listPtr == NULL)
    {
        cout << "All nodes have been deleted from the list";
    }
    return 0;
}