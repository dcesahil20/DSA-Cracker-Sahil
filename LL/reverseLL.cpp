#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void createLL(int arr[], int len){
    struct Node *t;
    struct Node *last;

    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<len; i++){
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void printLL(struct Node *p){
    while(p!=NULL){
        cout << p->data  << " ";
        p = p->next;
    }
}

void printRecursiveLL(struct Node *p){
    if(p!=NULL){
        cout << p->data << " ";
        printRecursiveLL(p->next);
    }
}

void printRecursiveReverseLL(struct Node *p){
    if(p!=NULL){
        printRecursiveReverseLL(p->next);
        cout << p->data << " ";
    }
}

int main(){
    int input[] = {1,2,3,4,5,6,7,8,9,4,3,2,3,45,6,7,8,90,0,89,7,6,5,4,3,2,12,1,2,3,34,45,5,6,6,66,45,756,87,568,678,678,5678,5678,5678,567,8567,867,978,56,23455,236,256,78467,96789,0,568,345,2347,4679,788,345,756,8};
    int arrsize = sizeof(input)/sizeof(input[0]);

    createLL(input,arrsize);
    // printLL(first);
    // printRecursiveLL(first);
    printRecursiveReverseLL(first);

    
}