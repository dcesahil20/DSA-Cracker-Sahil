#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int len){
    
    Pair minmax; 
    if(len==1){
        minmax.min = arr[0];
        minmax.max = arr[0];
    }

    if(arr[0]>arr[1]){
        minmax.min = arr[1];
        minmax.max = arr[0];
    }

    for(int i=2; i<len; i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main(){
    
    int input[] = {9,4,6,7,8};
    
    int lenArr = sizeof(input)/sizeof(input[0]);

    struct Pair x = getMinMax(input,lenArr);
    cout << "Min is: " << x.min << endl;
    cout << "Max is: " << x.max << endl;

}