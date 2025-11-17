// move all -ve numbers to left side of an array

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,-3,4,-5,6,-4,-2};

    int l=0;
    int h=sizeof(arr)/sizeof(int)-1;

    while(l<h){
        if(arr[l]>0){
            int temp = arr[l];
            arr[l]=arr[h];
            arr[h]=temp;
            h--;
        }
        else{
            // int temp = arr[l];
            // arr[l]=arr[h];
            // arr[h]=temp;
            l++;
        }
    }

    for(auto val : arr){
        cout << val << endl;
    }
}