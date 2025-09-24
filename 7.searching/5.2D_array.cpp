// binary search in 2D array
#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int row, int col, int target){
    int n=row, m=col;
    int s=0;
    int e=n*m -1;

    while(s<=e){
        int mid = s+(e-s)/2;
        int rowIndex=mid/m;
        int colIndex=mid%m;
        int element = arr[rowIndex][colIndex];

        if(element>target){
            e=mid-1;
        }
        else if(element<target){
            s=mid+1;
        }
        else{
            cout << "found at : " << rowIndex << ", " << colIndex << endl;
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
        int row=5, col=4;

        int target=12;
        bool ans = binarySearch(arr, row, col, target);

        if(ans){
            cout << target << " is present." << endl;
        }else{
            cout << target << " is not present." << endl;
        }
}