#include<iostream>
#include<climits>
using namespace std;

void findMax(int arr[], int n, int i, int& max){
    // base case
    if(i>=n) return ;

    // one case solve
    if(arr[i] > max){
        max = arr[i];
    }

    // recursion call
    findMax(arr, n, i+1, max);
}
void findMin(int arr[], int n, int i, int& min){
    // base case
    if(i>=n) return ;

    // one case solve
    if(arr[i] < min){
        min = arr[i];
    }

    // recursion call
    findMin(arr, n, i+1, min);
}

int main(){
    int arr[] = {10,30,21,44,32,17,19,66};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int max = INT_MIN;
    int min = INT_MAX;

    findMax(arr, n, i, max);
    findMin(arr, n, i, min);
    cout << "Max number is : " << max << endl;
    cout << "Min number is : " << min << endl;
}