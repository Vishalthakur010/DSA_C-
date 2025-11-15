// print all subarray using RE

#include<iostream>
#include<vector>
using namespace std;

void printSubarray_util(vector<int>&nums, int start, int end){
    // base case
    if(end >= nums.size()){
        return;
    }

    // one case solve
    for(int i=start; i<=end; i++){
        cout << nums[i];
    }
    cout << endl;

    // recursion call
    printSubarray_util(nums, start, end+1);
}

void printSubarray(vector<int>&nums){
    for(int i=0; i<nums.size(); i++){
        printSubarray_util(nums, i, i);
    }
}

int main(){
    vector<int>nums{1,2,3,4,5};
    printSubarray(nums);
}