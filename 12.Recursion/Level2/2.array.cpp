#include<iostream>
using namespace std;

// increment
// void print(int arr[], int n, int i){
//     // base case
//     if(i>=n) return ;

//     // 1 case solve
//     cout << arr[i] << " ";

//     // recursive call
//     print(arr, n, ++i);
// }

// decrement
void print(int arr[], int n, int i){
    // base case
    if(i>=n) return ;

    // recursive call
    print(arr, n, i+1);

    // 1 case solve
    cout << arr[i] << " ";
}

// void print(int arr[], int n){
//     // base case
//     if(n==0) return ;

//     // 1 case so;lve
//     cout << arr[0] << " ";

//     // recursive call
//     print(arr+1, n-1);
// }

int main(){
    int arr[] ={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=0;

    print(arr, n, i);
    // print(arr, n);
    cout << endl;
}