#include <iostream>
#include <algorithm>
using namespace std;


void sortNegPos(int arr[], int len){
    int l = 0;
    int h = len - 1;

    while(l<h){
        while(arr[l]<0 && l<h){
            l++;
        }
        while(arr[h]>=0 && l<h){
            h--;
        }

        if(l<h){
            swap(arr[l],arr[h]);
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int input[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int arrsize = sizeof(input)/sizeof(input[0]);
    sortNegPos(input,arrsize);
    printArr(input,arrsize);
}