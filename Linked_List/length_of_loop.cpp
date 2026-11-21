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

int countLoopLength(Node *head) {
    Node *slow = head;
    Node *fast = head; 

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            int count = 1;
            Node *curr = slow->next;

            while (curr != slow) {
                count++;
                curr = curr->next;
            }

            return count;
        }
    }

    return 0;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Cycle: 5 -> 2 
    head->next->next->next->next->next = head->next;

    cout << "Length of the loop: " << countLoopLength(head) << endl; 

    return 0;
}
