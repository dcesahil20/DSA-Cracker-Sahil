//  prefixSumLeft[i] = prefixSumLeft[i-1] + arr[i]
//  prefixSumRight[i] = prefixSumRight[i+1] + arr[i]


#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int input[] = {1,3,6,10,2,1,2,3,2};
    int arrsize = sizeof(input)/sizeof(input[0]);
   
    int preArrL[arrsize];

    preArrL[0] = input[0];

    for(int i=1; i<arrsize; i++){
         preArrL[i] = preArrL[i-1] + input[i];
    }

    printArr(preArrL,arrsize);
    cout << endl;

    int preArrR[arrsize];

    int end = arrsize-1;
    preArrR[end] = input[end];

    for (int i=end-1; i>=0; i--){
        preArrR[i] = preArrR[i+1] + input[i];
    }

    printArr(preArrR, arrsize);
    
}