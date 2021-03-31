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
    int input[] = {1,2,3,4,5,6,7,8,9,4,3,2,3,45,6,7,8,90,0,89,7,6,5,4,3,2,12,1,2,3,34,45,5,6,6,66,45,756,87,568,678,678,5678,5678,5678,567,8567,867,978,56,,23455,236,256,78467,96789,0,568,345,2347,4679,788,345,756,8};
    int n = sizeof(input)/sizeof(input[0]);
    
    swap(input,n);

    for (auto n : input){
        cout << n << ' ';
    }
        
}