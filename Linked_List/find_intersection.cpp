#include <iostream>

using namespace std; 

struct Node {
    int data;
    Node *next; 

    Node(int value) {
        data = value; 
        next = nullptr;
    }
};

void display(Node *head) {
    Node *temp = head; 

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl; 
}

Node *getIntersectionNode(Node *headA, Node *headB) {
    Node *ptrA = headA;
    Node *ptrB = headB;

    while (ptrA != ptrB) {
        ptrA = (ptrA == nullptr) ? headB : ptrA->next;
        ptrB = (ptrB == nullptr) ? headA : ptrB->next;
    }

    return ptrA; 
}

int main() {
    Node *common1 = new Node(8);
    Node *common2 = new Node(9);
    Node *common3 = new Node(10);

    common1->next = common2;
    common2->next = common3;

    // List A: 1 2 3 8 9 10
    Node *headA = new Node(1);
    headA->next = new Node(2);
    headA->next->next = new Node(3);
    headA->next->next->next = common1;

    // List B: 4 5 8 9 10 
    Node *headB = new Node(4);
    headB->next = new Node(5);
    headB->next->next = common1;

    cout << "List A: ";
    display(headA);

    cout << "List B: ";
    display(headB);

    Node *intersection = getIntersectionNode(headA, headB);

    if (intersection != nullptr) 
        cout << "Intersection point: " << intersection->data << endl; 
    else 
        cout << "No intersection found" << endl; 

    return 0;
}
