// missing elements from an array with duplicates

#include<iostream>
using namespace std;

void findMissing(int a[] , int n){

    // for(int i=0; i<n; i++){
    //     int index = abs(a[i])-1;
    //     if(a[index]>0){
    //         a[index] *= -1;
    //     }
    // }
    // // all positive indexes are missing
    // for(int i=0; i<n; i++){
    //     if(a[i]>0){
    //         cout << i+1 << endl;
    //     }
    // }

    // sorting + swapping method
    int i=0;
    while(i<n){
        int index=a[i]-1;
        if(a[i] != a[index]){
            int temp = a[i];
            a[i]=a[index];
            a[index]=temp;
        }
        else{
            i++;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] != i+1){
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    int a[]={1,3,5,3,3};
    // int a[]={1,3,5,3,4};
    n=sizeof(a)/sizeof(int);
    findMissing(a,n);
}