#include <iostream>
using namespace std;

int main(){
    int input[] = {1,2,3,4,5};
    int arrsize = sizeof(input)/sizeof(input[0]);

    int last = input[arrsize-1];
    //KEY: Peeche se aao shift karo
    for(int i=arrsize-1; i>0; i--){
        input[i] = input[i-1];
    }

    input[0] = last;

    for(int i =0; i<arrsize;i++){
        cout << input[i] << " ";
    }
}
