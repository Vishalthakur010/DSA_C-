// leetcode 242

#include<iostream>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
        int freqTable[256]={0};
        for(int i=0; i<s.length(); i++){
            freqTable[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            freqTable[t[i]]--;
        }
        for(int i=0; i<256; i++){
            if(freqTable[i] != 0){
                return false;
            }
        }
        return true;
}

int main(){
    string s="vishal";
    string t="lhaisv";

    // Brute force
    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());

    // if(s.compare(t) == 0){
    //     cout << "valid anagram" << endl;
    // }
    // else{
    //     cout << "invalid anagram" << endl;
    // }

    // optimized
    if(isAnagram(s,t)){
        cout << "valid anagram" << endl;
    }
    else{
        cout << "invalid anagram" << endl;
    }
}