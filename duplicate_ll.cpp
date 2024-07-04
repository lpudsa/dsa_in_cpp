#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head = NULL;

Node* create(int A[], int n) {
    Node* head = new Node;
    Node* last = head;
    head->data = A[0];
    head->next = nullptr;

    for (int i = 1; i < n; i++) {
        Node* temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }

    return head;
}
void concantenating(Node* p,Node* second){
    while(p!=nullptr){
        p=p->next;
    }
    p->next=second;
}


void display(Node* head) {
    while (head!= nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}
int main() {
    int A[] = {3, 5, 7, 10, 15};
    int B[] = {4,6,8,9};
    create(A, 5);
    Node* second = create(B, 4);
    display(head);
    return 0;
}