#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArr(vector<int> arr, int n){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    }

int main(){
    int input[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int arrsize = sizeof(input)/sizeof(input[0]);
    int k = 4;

    int i=0;
    int j=0;
    int maxnum = INT8_MIN;
    vector<int> res;

    // while(j<arrsize){

        while(j<k){
            maxnum = max(maxnum,input[j]);
            j++; 
        }
        res.push_back(maxnum);

        while(j>=k && j<arrsize){
            maxnum = max(maxnum, input[j]);
            res.push_back(maxnum);
            i++;
            j++;
        }

    // }

    printArr(res,arrsize);

   
}
