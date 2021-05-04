#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 5, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, arr+n);
    // printArr(arr,n);
    int k=2;
    int minVal = 0;
    int maxVal = 0;

    int res = arr[n-1] - arr[0];
    arr[0] = arr[0] + k;
    arr[n-1] = arr[n-1] - k;

    if(arr[0] > arr[n-1]){
        swap(arr[0], arr[n-1]);
    }

    for(int i=1; i<n; i++){
        if(arr[i]>=k){
            maxVal = max(arr[i-1]+k, arr[n-1]-k);
            minVal = min(arr[i-1]-k, arr[0]+k);
            res = min(res, maxVal-minVal);
        }
        else{
            continue;
        }
    }

    cout << res << endl;

}
