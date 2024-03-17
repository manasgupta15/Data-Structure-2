#include<iostream>
using namespace std;
struct Node{
  public:
  int data;
  Node* prev;
  Node* next;
  
  public:
  Node(int data1,Node* prev1,Node* next1) {
      data = data1;
      prev = nullptr;
      next = nullptr;
  }
};
int main()
{
    return 0;
}
