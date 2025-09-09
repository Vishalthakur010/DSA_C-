#include<iostream>
using namespace std;

int main(){
    int arr[8]={16,3,15,7,84, 5, 37,42};
    int size=8;

    int start=0;
    int end=size-1;

    while(start<=end){
        if(start==end){
            cout << arr[start] << endl;
        }
        else{
            cout << arr[start] << endl;
        cout << arr[end] << endl;
        }
        start++;
        end--;
    }
}