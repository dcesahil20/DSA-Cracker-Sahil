#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){

    Node *first = new Node();
    Node *second = new Node();

    first->data = 12;
    first->next = second;

    second->data = 13;
    second->next = NULL;

    Node *p = first;


    while(p!=NULL){
        cout << p->data << endl;
        p = p->next;
    }
}
