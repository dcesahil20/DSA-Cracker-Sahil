#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 

void fastSlowPointer(struct Node *head) 
{ 
    struct Node *slow_ptr = head; 
    struct Node *fast_ptr = head; 

    if (head!=NULL) 
    { 
        while (fast_ptr != NULL && fast_ptr->next != NULL) 
        { 
            fast_ptr = fast_ptr->next->next; 
            slow_ptr = slow_ptr->next; 
        } 
        printf("The middle element is [%d]\n\n", slow_ptr->data); 
    } 
} 

int getMiddle(Node *head)
{
   // Your code here
   struct Node *p = head;
   int len=0;
   
   while(p!=NULL){
       len++;
       p=p->next;
   }
   
   int index = 0;
   
   index = len/2;
   
   struct Node *rp = head;
   int c =0;
   while(c<index){
       rp = rp->next;
       c++;
   }
   
   return rp->data;
}

int main(){

}