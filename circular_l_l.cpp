#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=nullptr;

Node* create(int A[], int n){
    Node *last;
    head= new Node;
    head->data=A[0];
    head->next=head;
    last = head;

    for(int i=1;i<n;i++){
        Node* temp = new Node;
        temp->data = A[i];
        temp->next = head;
        last->next = temp;  
        last = temp;
    }
    return head;
}
void display(Node *p) {
    Node* start = p;
        do {
            cout << p->data << " ";
            p = p->next;
        } while (p != start);
        cout << endl;
        
}



int main() {
    int A[]={1,2,3,4,5,6};
    // int n=6;
    create(A,6);
    display(head);

    return 0;
}