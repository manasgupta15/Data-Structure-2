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

vector<int>inorderTraversal(Node* root) {
    vector<int>inorder;
    stack<Node*>st;
    Node* node = root;
    while(true) {
        if(node!=NULL) {
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->right = new Node(5);
    vector<int> result = inorderTraversal(root);
    cout << "Inorder Traversal: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    
}
