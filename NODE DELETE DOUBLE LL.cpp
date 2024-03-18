#include<iostream>
#include<vector>
using namespace std;

struct Node {
    public:
    int data;
    Node* back;
    Node* next;
    
    public:
    Node(int data1,Node* back1 = nullptr,Node* next1 = nullptr) {
        data = data1;
        back = back1;
        next = next1;
    }
};

Node* convertArrLL(vector<int> &arr) {
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
    while(head!=NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

void deleteNode(Node* temp) {
    Node* prev = temp->back;
    Node* front = temp->next;
    
    if(front == NULL) {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    
    temp->next = temp->back = nullptr;
    free(temp);
}

int main()
{
    vector<int>arr = {1,2,3,4,5};
    Node* head = convertArrLL(arr);
    print(head);
    cout<<endl;
    deleteNode(head->next->next);
    print(head);
}
