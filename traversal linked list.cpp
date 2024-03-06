#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* convertArrToLL(vector<int>& arr) {
    if (arr.empty()) {
        return nullptr; // Return nullptr for an empty vector
    }

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head; // Return the head of the linked list
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp -> next;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    Node* head = convertArrToLL(arr);
    
    // Print the data in the linked list
    printLinkedList(head);

    return 0;
}
