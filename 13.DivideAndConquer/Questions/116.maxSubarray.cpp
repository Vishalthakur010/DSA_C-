// Leetcode :- 53, Maximum subarray
// Another solution is done using recursion on leetcode
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// TC :- o(n^2)
int maxSubarraySum(vector<int> arr){
    int ans = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        int maxSum=0;
        for(int j=i; j<arr.size(); j++){
            maxSum += arr[j];
            if(maxSum > ans){
                ans = maxSum;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>arr{-2,1,-3,4,-1,2,1,-5,4};

    int ans = maxSubarraySum(arr);
    cout << "ans : " << ans << endl;
}