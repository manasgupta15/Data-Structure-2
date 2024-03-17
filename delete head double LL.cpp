#include<iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* back;
    Node* next;

    Node(int data1, Node* back1 = nullptr, Node* next1 = nullptr) {
        data = data1;
        back = back1;
        next = next1;
    }
};

Node* convertArrDD(vector<int>& arr) {
    if(arr.empty())
        return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], prev, nullptr);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deleteHead(Node* head) {
    if(head == NULL || head->next == NULL) return NULL;
    Node* prev = head;
    head = head->next;
    
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertArrDD(arr);
    // print(head);
    
    head = deleteHead(head);
    print(head);
    return 0;
}
