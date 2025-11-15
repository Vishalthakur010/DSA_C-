// remove all occurences of a substring
// Leetcode :- 1910

#include<iostream>
using namespace std;

    void removeOCCR(string &s, string &part){

        int found = s.find(part); // find the index of starting point

        if(found == string::npos){
            // Base case
            // no occurence of part found in s
            return;
        }
        else{
            string left_part = s.substr(0,found);
            string right_part = s.substr(found+part.size(), s.size());
            s = left_part + right_part;

            // recursion call
            removeOCCR(s, part);
        }
    }

    int main (){

        string s = "daabcbaabcbc";
        string part = "abc";

        removeOCCR(s, part);
        cout << s << endl;

    }