#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(int a[], int n){

    int min = INT8_MIN;
    vector<int> resVector;

    for(int i=n-1; i>=0; i--){
        if(a[i]>min){
            resVector.push_back(a[i]);
            min = a[i];
        }
    }

    return resVector;

}

void printArr(vector<int> arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int input[] = {16,17,4,3,5,2};
    int arrsize = sizeof(input)/sizeof(input[0]);
    vector<int> res = leaders(input,arrsize);
    reverse(res.begin(), res.end());
    printArr(res,arrsize);

}