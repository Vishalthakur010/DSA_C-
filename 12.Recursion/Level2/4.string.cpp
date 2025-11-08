#include<iostream>
#include<vector>
using namespace std;

void findKey(string& str, char& key, int& n, int i, vector<int>& ans, int& count){
    if(i>=n){
        return;
    }
    if(str[i]==key){
        count++;
        ans.push_back(i);
    }

    return findKey(str, key, n, i+1, ans, count);
}

int main(){
    string str = "vishalthakur";
    char key = 'a';
    int n = str.length();
    int i=0;
    vector<int>ans;
    int count=0;

    findKey(str, key, n, i, ans, count);
    for(auto answer: ans){
        cout << "found at : " << answer << endl;
    }
    cout << "count : " << count << endl;
}