#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start =0, end =size-1;
    // int mid =(start + end)/2;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(target < arr[mid]){
            // search left
            end = mid-1;
        }
        else if(target > arr[mid]){
            // search right
            start = mid + 1;
        }
        else{
            return mid;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    // int arr[]={2,4,6,8,10,12,16};
    // int size=7;
    // int target = 6;

    // int indexOfTarget = binarySearch(arr, size, target);

    // if(indexOfTarget == -1){
    //     cout << "Target not found" << endl;
    // }
    // else{
    //     cout << "Target found at : " << indexOfTarget << endl;
    // }

    
    // predefined function
    vector<int> v{2,4,5,6,9,12};
    int arr[]={1,2,3,4,5,8,12};
    int size = 7;

    // if(binary_search(v.begin(), v.end(), 10)){
    if(binary_search(arr, arr + size, 13)){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }
}