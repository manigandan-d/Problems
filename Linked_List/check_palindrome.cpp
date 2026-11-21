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

    ~LinkedList() {
        Node *temp = head; 

        while (temp != nullptr) {
            Node *nextNode = temp->next;
            delete temp; 
            temp = nextNode;
        }
    }
};

Node *reverseList(Node *head) {
    Node *prev = nullptr;
    Node *curr = head;

    while (curr != nullptr) {
        Node *nextNode = curr->next;

        curr->next = prev;

        prev = curr; 
        curr = nextNode;
    }

    return prev; 
}

bool isPalindrome(Node *head) {
    if (head == nullptr || head->next == nullptr)
        return true;

    Node *slow = head; 
    Node *fast = head; 

    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *secondHalf = reverseList(slow->next);

    Node *first = head; 
    Node *second = secondHalf;

    bool result = true; 

    while (second != nullptr) {
        if (first->data != second->data) {
            result = false;
            break;
        }

        first = first->next;
        second = second->next;
    }

    slow->next = reverseList(secondHalf);

    return result;
}

int main() {
    LinkedList list; 

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(2);
    list.insert(1);

    list.display();

    if (isPalindrome(list.getHead()))
        cout << "Palindrome" << endl; 
    else 
        cout << "Not a palindrome" << endl; 

    return 0;
}
