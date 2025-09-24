// find piviot element in roteted and sorted array

#include<iostream>
#include<vector>
using namespace std;

int findPiviot(vector<int>arr){
    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid = s+ (e-s)/2;

        if(s==e){
            return s;
        }
        if(mid <= e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1>=s && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    // vector<int> arr{9,10,2,4,6,8};
    // vector<int> arr{2,4,6,8,9,10};
    vector<int> arr{2};
    int ans = findPiviot(arr);

    if(ans == -1){
        cout << "ans couldn't found" << endl;
    }
    else{
        cout << "ans is at index : " << ans << endl;
        cout << "value of ans is : " << arr[ans] << endl;
    }
}