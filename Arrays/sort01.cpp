#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void sortArr(int arr[], int n){
    int l = 0;
    int r = n-1;
    
    while (l<r){
        
        if(arr[l]==0 && l<r){
            l++;
        }
        if(arr[r]==1 && l<r){
            r--;
        }
        if(l<r){
            arr[l] = 0;
            arr[r] = 1;
            l++;
            r--;
        }
    }

}


int main(){
    int input[]= {0, 1, 0, 1, 1};
    int lenArr = sizeof(input)/sizeof(input[0]);
    sortArr(input,lenArr);
    printArr(input,lenArr);
}