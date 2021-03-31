#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int input[] = { 7, 10, 4 ,20, 15};
    int lenArr = sizeof(input)/sizeof(input[0]);
    sort(input, input+lenArr);
    printArr(input,lenArr);
    int nth = 4-1;
    cout << "res " <<input[nth] << endl;
}