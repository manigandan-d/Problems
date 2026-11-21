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

    void deleteMiddle() {
        Node *slow = head; 
        Node *fast = head; 
        Node *prev = nullptr;

        while (fast != nullptr && fast->next != nullptr) {
            prev = slow; 
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;
        delete slow; 
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

    list.deleteMiddle();

    cout << "After deletion of middle node: ";
    list.display();

    return 0;
}
