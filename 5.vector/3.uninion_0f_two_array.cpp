// union of 2 arrays
// only add unique elemets
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,4,6,8,7};
    int sizeb=5;

    vector<int> ans;

    // push all elements of arr into ans vector
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

    // push all elements of brr into ans vector
    for(int i=0; i<sizeb; i++){
        for(int j=0; j<ans.size(); j++){
            if(ans[j]==brr[i]){
                brr[i]=INT_MIN;
                break;
            }
        }
        if(brr[i] != INT_MIN){
            ans.push_back(brr[i]);
        }
    }

    // for(int i=0; i<sizea; i++){
    //     for(int j=0; j<sizeb; j++){
    //         if(arr[i]==brr[i]){
                
    //         }
    //     }
    // }

    // print ans
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " " << endl;
    }
}