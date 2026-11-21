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

    Node *findMiddle() {
        Node *slow = head; 
        Node *fast = head; 

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow; 
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

int main() {
    LinkedList list; 

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    // list.insert(60);

    list.display();

    Node *middle = list.findMiddle();

    cout << "Middle node: " << middle->data << endl; 

    return 0;
}
