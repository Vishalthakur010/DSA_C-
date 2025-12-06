// Add two numbers represented by two arrays :- GFG

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> sum(vector<int>& arr1, vector<int>& arr2){
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    int carry = 0;
    vector<int>result;

    while(i >=0 || j>=0 || carry>0){
        int x = carry;

        if(i>=0){
            x += arr1[i];
            i--;
        }
        if(j>=0){
            x += arr2[j];
            j--;
        }
        
        int digit = x%10;
        carry = x/10;

        result.push_back(digit);
    }
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    vector<int> arr1{9,5,4,9};
    vector<int> arr2{2,1,4};

    vector<int> ans = sum(arr1, arr2);
    for(auto i:ans){
        cout << i << " ";
    }
}