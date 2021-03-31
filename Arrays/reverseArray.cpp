#include <iostream>
using namespace std;

void swap(int arr[], int size){
    int i = 0;
    while(i<size){
        int temp = arr[i];
        arr[i] = arr[size-1];
        arr[size-1] = temp;
        i++;
        size--;
    }
}


int main(){
    int input[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(input)/sizeof(input[0]);
    
    swap(input,n);

    for (auto n : input){
        cout << n << ' ';
    }
        
}