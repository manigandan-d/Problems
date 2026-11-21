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

    void sort012() {
        if (head == nullptr || head->next == nullptr)
            return; 

        Node zeroDummy(0);
        Node oneDummy(1);
        Node twoDummy(2);

        Node *zero = &zeroDummy;
        Node *one = &oneDummy;
        Node *two = &twoDummy;

        Node *curr = head;

        while (curr != nullptr) {
            if (curr->data == 0) {
                zero->next = curr;
                zero = zero->next;
            }
            else if (curr->data == 1) {
                one->next = curr; 
                one = one->next;
            }
            else {
                two->next = curr; 
                two = two->next;
            }

            curr = curr->next;
        }

        zero->next = (oneDummy.next == nullptr) ? twoDummy.next : oneDummy.next; 
        one->next = twoDummy.next;
        two->next = nullptr;

        head = zeroDummy.next; 
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

    list.insert(1);
    list.insert(2);
    list.insert(0);
    list.insert(2);
    list.insert(1);
    list.insert(0);
    list.insert(1);

    list.display();

    list.sort012();

    cout << "After sorting of 0s, 1s and 2s: ";
    list.display();

    return 0;
}
