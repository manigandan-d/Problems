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

Node *detectCycleStart(Node *head) {
    Node *slow = head;
    Node *fast = head; 

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            slow = head; 

            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            return slow;
        }
    }

    return nullptr;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Cycle: 5 -> 2 
    head->next->next->next->next->next = head->next;

    Node *cycleStart = detectCycleStart(head);

    if (cycleStart != nullptr)
        cout << "Cycle starts at node: " << cycleStart->data << endl; 
    else 
        cout << "No cycle detected" << endl; 

    return 0;
}
