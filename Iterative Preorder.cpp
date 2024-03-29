#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<int>preOrderTraversal(Node* root) {
    vector<int>preOrder;
    if(root == nullptr) return preOrder;
    
    stack<Node*>st;
    st.push(root);
    while(!st.empty()) {
        Node* root = st.top();
        st.pop();
        
        preOrder.push_back(root->data);
        if(root->right!=nullptr) {
            st.push(root->right);
        }
        
        if(root->left!=nullptr) {
            st.push(root->left);
        }
    }
    return preOrder;
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->right = new Node(5);
    vector<int> result = preOrderTraversal(root);
    cout << "Preorder Traversal: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    
}
