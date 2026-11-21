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

    void insertAtBeginning(int value) {
        Node *newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
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

    // 1-based indexing 
    void insertAtPosition(int position, int value) {
        if (position < 1)
            return; 

        if (position == 1) {
            insertAtBeginning(value);
            return; 
        }

        Node *temp = head; 

        for (int i = 1; i < position - 1 && temp != nullptr; i++) 
            temp = temp->next;

        if (temp == nullptr) 
            return;

        Node *newNode = new Node(value);

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void insertAfterValue(int target, int value) {
        Node *temp = head;

        while (temp != nullptr && temp->data != target)
            temp = temp->next;

        if (temp == nullptr)
            return; 

        Node *newNode = new Node(value);

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteFromBeginning() {
        if (head == nullptr)
            return; 

        Node *temp = head;
        head = head->next;

        delete temp; 
    }

    void deleteFromEnd() {
        if (head == nullptr)
            return; 

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head; 

        while (temp->next->next != nullptr)
            temp = temp->next;
        
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteAtPosition(int position) {
        if (head == nullptr || position < 1) 
            return; 

        if (head->next == nullptr) {
            deleteFromBeginning();
            return;
        }

        Node *temp = head;

        for (int i = 1; i < position - 1 && temp != nullptr; i++) 
            temp = temp->next;

        if (temp == nullptr || temp->next == nullptr) 
            return; 

        Node *nodeToDelete = temp->next;
        
        temp->next = nodeToDelete->next;

        delete nodeToDelete;
    }

    void deleteByValue(int value) {
        if (head == nullptr)
            return;

        if (head->data == value) {
            deleteFromBeginning();
            return; 
        }

        Node *temp = head; 

        while (temp->next != nullptr && temp->next->data != value)
            temp = temp->next;

        if (temp->next == nullptr)
            return; 

        Node *nodeToDelete = temp->next;

        temp->next = nodeToDelete->next;

        delete nodeToDelete;
    }

    bool search(int value) {
        Node *temp = head; 

        while (temp != nullptr) {
            if (temp->data == value) 
                return true;

            temp = temp->next;
        }

        return false;
    }

    void display() {
        Node *temp = head; 

        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl; 
    }

    int length() {
        int count = 0;

        Node *temp = head; 

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        return count; 
    }

    void reverse() {
        Node *prev = nullptr;
        Node *curr = head;

        while (curr != nullptr) {
            Node *nextNode = curr->next;

            curr->next = prev;

            prev = curr; 
            curr = nextNode;
        }

        head = prev; 
    }

    void rotate(int k) {
        if (head == nullptr || head->next == nullptr)
            return; 

        int n = 1;
        Node *tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            n++;
        }

        k = k % n;

        if (k == 0)
            return;

        tail->next = head;

        Node *newTail = head; 

        for (int i = 1; i < k; i++) 
            newTail = newTail->next;

        head = newTail->next;
        newTail->next = nullptr;
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

    // Call any functions we want 

    return 0;
}
