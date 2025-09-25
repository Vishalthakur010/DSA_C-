// GFG :- Painters partition
// Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

// Determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).

// Example:-

// Input: arr[] = [10, 20, 30, 40], k = 2
// Output: 60
// Explanation: A valid optimal partition is - 
// Painter 1 → [10, 20, 30] → time = 60
// Painter 2 → [40] → time = 40
// Job will be complete at time = max(60, 40) = 60

// Input: arr[] = [5, 10, 30, 20, 15], k = 3
// Output: 35
// Explanation: The optimal allocation of boards among 3 painters is - 
// Painter 1 → [5, 10] → time = 15
// Painter 2 → [30] → time = 30
// Painter 3 → [20, 15] → time = 35
// Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35


#include<iostream>
#include<vector>
using namespace std;

bool isPossibleSolution(vector<int>arr, int k, int mid){
    int time=0;
    int count=1;
    for(int i=0; i<arr.size(); i++){
        if(arr[0]>mid){
            return false;
        }
        if(time+arr[i]>mid){
            count++;
            time = arr[i];
            if(count>k){
                return false;
            }
        }
        else{
            time += arr[i];
        }
    }
    return true;
}

int main(){
    vector<int>arr{10,20,30,40};
    int k=2;

    int start=0, end=0;
    for(int i=0; i<arr.size(); i++){
        end += arr[i];
    }

    int ans=0;
    while(start<=end){
        int mid= start + (end-start)/2;
        if(isPossibleSolution(arr, k, mid)){
            ans = mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout << ans << endl;
}