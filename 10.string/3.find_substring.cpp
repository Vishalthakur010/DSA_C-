// find all substring from a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "abc";
    // sub="";

    for(int i=0; i<s.length(); i++){
        for(int j=i; j<s.length(); j++){
            cout << s.substr(i,j-i+1) << endl;
        }
    }
}