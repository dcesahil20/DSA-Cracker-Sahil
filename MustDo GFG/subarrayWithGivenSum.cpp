#include <iostream>
using namespace std;


/////// INCORRECT SOUTION, TESTCASE FAILING, REDO //////////////

int main(){

    int input[] = {135, 101, 170 ,125 ,79, 159, 163, 65, 106, 146 ,82 ,28 ,162, 92 ,196, 143 ,28 ,37 ,192 ,5 ,103, 154 ,93, 183 ,22, 117, 119 ,96 ,48, 127, 172 ,139, 70 ,113, 68, 100, 36, 95, 104, 12, 123, 134};
    // {135, 101, 170 ,125 ,79, 159, 163, 65, 106, 146 ,82 ,28 ,162, 92 ,196, 143 ,28 ,37 ,192 ,5 ,103, 154 ,93, 183 ,22, 117, 119 ,96 ,48, 127, 172 ,139, 70 ,113, 68, 100, 36, 95, 104, 12, 123, 134}
    int arrsize = sizeof(input)/sizeof(input[0]);

    int i=0;
    int j=0;
    int s = 468;

    int sum = 0;
    bool flag=false;

    for(int k = 0; k<arrsize; k++){
        cout << sum << endl;
        if(sum < s){
            sum = sum + input[j];
            j++;
        }
        if(sum > s){
            sum = sum + input[i];
            i++;
        }
        if(sum==s){
            flag = true;
            break;
        }
    }
    

    int ns=0;
    for(int x=i; x<=j; x++){
        ns = ns + input[x];
    } 
    cout << "ns " << ns;

    if(ns==s){
     cout << "start: " << i+1 << " end: " << j+1 << endl;
    }

    else{
        cout << "-1" << endl;
    }

}