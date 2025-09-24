// find the odd occuring element in an array
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr){
    int s=0, e=arr.size()-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(s==e){
            return s;
        }

        // 2 cases mid-even or mid-odd
        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    // vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    vector<int> arr{1,1,2,2,3,3,4,5,5,6,6,7,7,1,1,2,2,3,3,100,100};
    int ans = solve(arr);
    cout << "index is : " << ans << endl;
    cout << "ans is : " << arr[ans] << endl;
}