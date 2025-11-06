#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node* prev;
    Node(int val){
        data = val;
        Next = nullptr;
        prev = nullptr;
    }
};

void connect(Node* a, Node* b){
    if(a) a->Next = b;
    if(b) b->prev = a;
}

int main(){
   Node* Head=new Node(12);
   Node* N1=new Node(12);
   Node* N2=new Node(12);
   Node* N3=new Node(12);

   connect(Head, N1);
   connect(N1, N2);
   connect(N2, N3);

  Node* newhead=new Node(10);
  newhead->Next=Head;
  Head->prev=newhead;
  
    
    Node* temp=newhead;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->Next;
    };
}