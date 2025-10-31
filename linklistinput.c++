#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;
    
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        Node* newnode = new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;

        }
        else {
            // connect the new node to the end of the list
            tail->next = newnode;
            tail = newnode;
        }

    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NUll"<<endl;
    


    return 0;
}
