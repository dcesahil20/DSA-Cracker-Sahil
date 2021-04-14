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
    int input[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int arrsize = sizeof(input)/sizeof(input[0]);
    int k = 3;

    int i=0;
    int j=0;
    int maxnum = INT8_MIN;
    vector<int> res;

    while(j<arrsize){

        if(j<k){
            maxnum = max(maxnum,input[j]);
            j++; 
        }
        res.push_back(maxnum);

        if(j>=k){
            maxnum = max(maxnum, input[j]);
            res.push_back(maxnum);
            i++;
            j++;
        }

    }

    printArr(res,arrsize);

   
}
