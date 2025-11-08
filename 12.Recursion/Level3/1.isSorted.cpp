#include<iostream>
using namespace std;

bool isSorted(int arr[], int n, int i){
    if(i == n-1) return true;

    if(arr[i] > arr[i+1]){
        return false;
    }

    return isSorted(arr, n, i+1);
}

int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;

    if(isSorted(arr, n, i)){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}