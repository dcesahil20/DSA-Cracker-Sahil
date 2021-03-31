#include <bits/stdc++.h>
using namespace std;


void swapIndex(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void sort012(int arr[], int len){
    int l = 0;
    int mid = 0;
    int h = len - 1;

    while(mid <=h){
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==0){
            // swapIndex(arr,l,mid);
            swap(arr[mid], arr[l]);
            mid++;
            l++;
        }
        if(arr[mid]==2){
            // swapIndex(arr,mid,h);
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    // int input[] = {1,0,2,1,0,0,1,0,2,0,1,2,0,1};
    int input[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 ,2 };

    int arrsize = sizeof(input)/sizeof(input[0]);
    sort012(input,arrsize);
    printArr(input,arrsize);
}