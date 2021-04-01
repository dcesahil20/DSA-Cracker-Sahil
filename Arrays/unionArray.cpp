#include <iostream>
#include <map>
#include <iterator>

using namespace std;
/*
    NOTE: MAP always store unique keys, but values can be diffrent
*/

void findUnion(int arr1[], int arr2[], int len1, int len2){
    map<int,int> mp;
    map<int, int>::iterator itr;

    for(int i=0; i<len1; i++){
        mp.insert({arr1[i],i});
    }
    for(int i=0; i<len2; i++){
        mp.insert({arr2[i],i});
    }

    for(itr=mp.begin(); itr!=mp.end(); itr++){
        cout << itr->first << " ";
    }

}

int main(){
    int input1[] = {85, 25, 1, 32, 54, 6};
    int input2[] = {85,2};
    findUnion(input1,input2,6,2);
}