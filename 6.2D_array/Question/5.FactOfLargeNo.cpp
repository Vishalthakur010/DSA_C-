// Factorial of large number :- GFG

#include<iostream>
#include<vector>
using namespace std;

vector<int> fact(int n, vector<int>& ans){
    // vector<int> ans;
    ans.push_back(1);
    
    for(int i=2; i<=n; i++){
        int carry=0;
        for(int j=0; j<ans.size(); j++){
            int x = ans[j] * i + carry;
            ans[j] = x%10;
            carry = x/10;
        }

        if(carry > 0){
            ans.push_back(carry);
        }
    }

    for(int i=0; i<ans.size()/2; i++){
        swap(ans[i], ans[ans.size()-i-1]);
    }
    return ans;
}

int main(){
    int n=6;
    vector<int> ans;

    ans = fact(n, ans);
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
}