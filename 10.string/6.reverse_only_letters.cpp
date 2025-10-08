// leetcode 917

// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

 

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s = "Test1ng-Leet=code-Q!";
    int start=0;
    int end=s.length()-1;

    while(start<=end){
        // bool isStartLetter = isalpha(s[start]);
        // bool isendtLetter = isalpha(s[end]);

        bool isStartLetter = ( (s[start]>='a' && s[start]<='z') || (s[start]>='A' && s[start]<='Z') );
        bool isendtLetter = ( (s[end]>='a' && s[end]<='z') || (s[end]>='A' && s[end]<='Z') );

        if(isStartLetter && isendtLetter){
            swap(s[start], s[end]);
            start++, end--;
        }
        else if(!isStartLetter){
            start++;
        }
        else{
            end--;
        }
    }
    cout << s << endl;
}