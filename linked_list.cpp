#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

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



Node* Search(Node *p, int key){
    while(p!= nullptr){
        if(key == p->data){
            return p;
        }
        p = p->next;
    }
    return NULL;
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
    Node* head = create(A, 5);
    int key;
    cout << "Enter the Key: ";
    cin >> key;
    Node* result = Search(head, key);
    if (result!= NULL) {
        cout << "Key found\n";
    } else {
        cout << "Key not found\n";
    }

    return 0;
}
