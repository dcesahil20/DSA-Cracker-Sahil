#include <iostream>
using namespace std;

int main(){
    int input[] = {1,2,5,-2,-1,-4,9,-3};
    int arrsize = sizeof(input)/sizeof(input[0]);

    int maxSum = INT8_MIN;
    int curSum = 0;
    
    for(int i=0; i<arrsize; i++){
        curSum = curSum + input[i];
        
        if(maxSum < curSum){
            maxSum = curSum;
        }
        if(curSum<0){
            curSum=0;
        }
    }

    cout << maxSum;
}