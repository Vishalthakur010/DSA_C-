// subsequence of a string
#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(string str, string output, int i, vector<string>& v){
    // Base case
    if(i>=str.length()){
        // cout << output << endl;
        // store
        v.push_back(output);
        return;
    }

    // exclude
    printSubsequences(str, output, i+1, v);

    // include
    output.push_back(str[i]);
    printSubsequences(str, output, i+1, v);
}

int main(){
    string str = "abc";
    string output = "";
    vector<string>v;

    int i = 0;
    printSubsequences(str, output, i, v);

    cout << "Printing all subsequences : ";
    for(auto ans : v){
        cout << ans << " ";
    }
    cout << endl << "Size of vector : " << v.size() << endl;
}