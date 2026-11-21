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

Node *addTwoNumbers(Node *l1, Node *l2) {
    Node dummy(0);
    Node *tail = &dummy;

    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry; 

        if (l1 != nullptr) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;

        tail->next = new Node(sum % 10);
        tail = tail->next;
    }

    return dummy.next;
}

int main() {
    // First number: 342 
    Node *l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);

    // Second number: 465 
    Node *l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);

    cout << "First number: ";
    display(l1);

    cout << "Second number: ";
    display(l2);

    Node *result = addTwoNumbers(l1, l2);

    cout << "Sum: ";
    display(result);

    return 0;
}
