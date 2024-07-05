#include <iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first = NULL;

void Create(int A[],int n){
    struct Node *t,*last;
    first = new Node;
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++){
       t = new Node;
       t->data = A[i];
       t->prev = last;
       t->next = NULL;
       last->next = t;
       last = t;
    }
}

void Reverse(Node *p){
    Node *temp = NULL;
    Node *current = first;
    while(current!= NULL){
        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        if(temp == NULL){
            first = current;
        }
        current = temp;
    }
}

void display(Node* first) {
    while (first!= nullptr) {
        cout << first->data << " ";
        first = first->next;
    }
    cout << "\n";
}

int main(){
    int A[] = {1,8,6,7,9,};
    Create(A,5);
    Reverse(first);
    display(first);
}
