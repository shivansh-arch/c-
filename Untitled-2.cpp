#include <iostream>
#include <cstdlib>  
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node)); 
    newNode->data = newData;
    newNode->next = NULL;

    if (head == NULL) {  
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void deleteAtEnd(Node*& head) {
    if (head == NULL) {
        
        return;
    }

    
    if (head->next == NULL) {
        
        head = NULL;
        return;
    }

    
    Node* temp = head;
    while (temp->next->next != NULL) 
        temp = temp->next;
 
    temp->next = NULL;  
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Initial list: ";
    display(head);

    
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        
    }

    return 0;
}
