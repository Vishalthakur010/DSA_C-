#include<iostream>
using namespace std;

bool isPalindrome(string& s, int start, int end){
    // Base case
    if(start>=end){
        return true;
    }

    // solve one case
    if(s[start] != s[end]){
        return false;
    }

    // recursion call
    return isPalindrome(s, start+1, end-1);
}

int main(){
    string s = "raceecar";
    cout << isPalindrome(s, 0, s.size()-1) << endl;
}