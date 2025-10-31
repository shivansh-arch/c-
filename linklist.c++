#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
int main(){
    node* head=new node();
    node* second=new node();
    node* third=new node();
    // assiging data thorugh ->data 
    head->data=10;
    second->data=100;
    third->data=1000;
    // giving direction of flow 
    head -> next=second;
    second -> next=third;
    third->next=NULL;
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NUll"<<endl;
    


    return 0;
}
