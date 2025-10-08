// leetcode : 647
// find palindromic substring

#include<iostream>
using namespace std;

int expandAroundIndex(string s, int left, int right){
    int count = 0;
    while(left >= 0 && right < s.length() && s[left] == s[right]){
        left--;
        right++;
        count ++;
    }
    return count;
}

int main(){
    string str= "racecar";
    int count = 0;

    for(int i=0; i<str.length(); i++){
        int oddCount = expandAroundIndex(str, i, i);
        count += oddCount;

        int evenCount = expandAroundIndex(str, i, i+1);
        count +=evenCount;
    }

    cout << count << endl;

}