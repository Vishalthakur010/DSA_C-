// Intersection of two arrays
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,3,5,5,7,9};
    vector<int>brr{2,4,6,5,8,5,7};

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){ 
            if(arr[i]==brr[j]){
                // mark
                brr[j]=-1;
                ans.push_back(arr[i]);
            }
        }
    }

    for(auto value:ans){
        cout << value << endl;
    }
    // // print ans
    // for(int i=0; i<ans.size(); i++){
    //     cout << ans[i] << " " << endl;
    // }
}