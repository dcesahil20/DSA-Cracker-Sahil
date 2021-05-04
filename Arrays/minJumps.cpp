#include <iostream>
#include <algorithm>
using namespace std;

int minJumps(int arr[], int n){
    int i=0, j=0, k=0, vjump=0, count=0;
    int mn = INT8_MAX;
    int mx = INT8_MIN;
    int nmx = INT8_MIN;


    while(i<n){
        vjump = arr[i];
        cout << "vjump: " << vjump<< endl;

        while(j<=vjump){
            
            mx = max(mx,arr[j+i]);
            cout << "mx: " << mx  << endl;
            
            if(nmx < mx){
                k = j;
                nmx = mx;
                cout << "nmx: " << nmx  << endl;
            }
            j++;
        }
        j=0;
        i = k;
        count++;
    }

    return count;
}

int main(){
    int input[] = {3,2,1,0,4};
    int arrsize = sizeof(input)/sizeof(input[0]);

    cout << minJumps(input,arrsize) << endl;
}
