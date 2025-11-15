// last occurence of a char
#include<iostream>
#include<cstring>
using namespace std;

// Left to Right
void lastOccLTR(string s, char x, int i, int&ans){

    // Base case
    if(i>=s.length()){
        return;
    }
    // solve one case
    if(s[i] == x){
        ans = i;
    }

    // Recursion call
    lastOccLTR(s, x, i+1, ans);
}

// Right to Left
void lastOccRTL(string s, char x, int i, int& ans){

    // Base case
    if(i<0){
        return;
    }

    // solve one case
    if(s[i]==x){
        ans = i;
        return;
    }

    // Recursion call
    lastOccRTL(s, x, i-1, ans);
}

int main(){
    string s = "abcddedgde";
    char x = 'd';
    int ans = -1;

    // lastOccLTR(s, x, 0, ans);
    // lastOccRTL(s, x, s.length()-1, ans);
    // cout << ans << endl;

    
    // STL function
    const char* cstr = s.c_str();
    const char* result = strrchr(cstr, x);
    cout << result - cstr << endl;
}