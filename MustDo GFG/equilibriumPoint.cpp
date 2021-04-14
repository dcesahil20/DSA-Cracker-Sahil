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
    int input[] = {20, 17, 42, 25, 32, 32, 30, 32, 37, 9, 2, 33, 31, 17, 14, 40, 9 ,12 ,36 ,21, 8 ,33 ,6,6 ,10 ,37, 12, 26, 21, 3};
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
    cout << endl;
    int eqIndex = 0;

    for(int i=0; i<arrsize; i++){
        if(preArrR[i]==preArrL[i]){
            eqIndex = i;
            break;
        }
    }

    cout << input[eqIndex] << endl;
}

// {20, 17, 42, 25, 32, 32, 30, 32, 37, 9, 2, 33, 31, 17, 14, 40, 9 ,12 ,36 ,21, 8 ,33 ,6,6 ,10 ,37, 12, 26, 21, 3}