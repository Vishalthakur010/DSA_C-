#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// method 1
int solve(vector<int>& arr, int target){
    // Base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }

    // solve 1 case
    int mini = INT_MAX;
    for(auto value : arr){
        int ans = solve(arr, target-value);
        if(ans != INT_MAX ){
            mini = min(mini, ans+1);
        }
    }

    return mini;
}

// method 2
int solve(vector<int>& arr, int target, int output){
    // Base case
    if(target == output){
        return 0;
    }
    if(target < output){
        return INT_MAX;
    }

    // solve 1 case
    int mini = INT_MAX;
    for(auto value : arr){
        int ans = solve(arr, target, output+value);
        if(ans != INT_MAX ){
            mini = min(mini, ans+1);
        }
    }

    return mini;
}


int main(){
    vector<int>arr{1,2};
    int target = 5;
    int output=0;

    // int ans = solve(arr, target);
    int ans = solve(arr, target, output);
    cout << "Answer is : " << ans << endl;
}