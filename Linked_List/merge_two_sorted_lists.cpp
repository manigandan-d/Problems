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

class LinkedList {
private:
    Node *head; 

public: 
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node *newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node *temp = head; 

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void display() {
        Node *temp = head; 

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl; 
    }

    Node *getHead() {
        return head;
    }

    void setHead(Node *newHead) {
        head = newHead;
    } 

    ~LinkedList() {
        Node *temp = head; 

        while (temp != nullptr) {
            Node *nextNode = temp->next;
            delete temp; 
            temp = nextNode;
        }
    }
};

Node *mergeTwoLists(Node *list1, Node *list2) {
    Node dummy(0);
    Node *tail = &dummy;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->data <= list2->data) {
            tail->next = list1;
            list1 = list1->next;
        }
        else {
            tail->next = list2;
            list2 = list2->next;
        }

        tail = tail->next;
    }

    if (list1 != nullptr) 
        tail->next = list1;
    else 
        tail->next = list2;

    return dummy.next;
}

int main() {
    LinkedList list1, list2, list; 

    list1.insert(10);
    list1.insert(30);
    list1.insert(50);

    list2.insert(20);
    list2.insert(40);
    list2.insert(60);

    cout << "List 1: ";
    list1.display();

    cout << "List 2: ";
    list2.display();

    Node *result = mergeTwoLists(list1.getHead(), list2.getHead());

    // To avoid double free 
    list1.setHead(nullptr);
    list2.setHead(nullptr);

    list.setHead(result);

    cout << "After merging: ";
    list.display();

    return 0;
}
