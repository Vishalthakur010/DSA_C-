// when we have infinite array and we don't know the end

#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>arr, int start, int end, int x){
    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int expoSearch(vector<int>arr, int x){
    int i=0, j=1;
    while(arr[j]<x){
        i=j;
        j=j*2;
    }
    return bs(arr, i, j, x);
}

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int x=7;

    int ans = expoSearch(arr, x);
    cout << "Index : " << ans << endl;
}