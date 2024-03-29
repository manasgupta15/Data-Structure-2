#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

void preOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }
    
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}


void inorderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if(root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root -> data << " ";
}

void levelOrderTraversal(Node* root) {
    if(root == nullptr) {
        return;
    }
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";
        if(current->left!=nullptr) q.push(current->left);
        if(current->right!=nullptr) q.push(current->right);
    }
}
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->right = new Node(5);
    
    cout << "PreOrder Traversal : ";
    preOrderTraversal(root);
    cout << endl;
    
    cout << "Inorder Traversal : ";
    inorderTraversal(root);
    cout << endl;
    
    
    cout << "postorderTraversal : ";
    postorderTraversal(root);
    cout<< endl;
    
    
    cout<<"Level Order Traversal : ";
    levelOrderTraversal(root);
    cout<<endl;
    
    return 0;
}
