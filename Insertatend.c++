#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void insertAtEnd(Node*& head, int newData) {
    struct MyNode* newode = (struct MyNode*)malloc(sizeof(struct MyNode))
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
int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    cout << "Initial list: ";
}