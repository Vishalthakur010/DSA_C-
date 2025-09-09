#include<iostream>
using namespace std;

int main(){
    int arr[7]={16,3,15,7,84, 5, 37};
    int size=7;

    int start=0;
    int end=size-1;

    while(start <=end){
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}