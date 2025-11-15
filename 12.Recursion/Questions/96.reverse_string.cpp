#include<iostream>
using namespace std;

void reverse(string& s, int start, int end){
    // Base case
    if(start >= end){
        return;
    }

    // one case solve
    swap(s[start], s[end]);

    // recursion call
    reverse(s, start+1, end-1);
}

int main(){
    string s = "vishal";

    reverse(s, 0, s.length()-1);
    cout << s << endl;
}