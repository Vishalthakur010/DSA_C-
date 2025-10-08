#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

bool cmp(char first, char second){
    return first > second;
}
bool compare(int a, int b){
    return a>b;
}

int main(){
    // string s = "vishal";
    // sort(s.begin(), s.end(), cmp);

    // cout << s << endl;

    // vector<int>v{5,3,1,4,2};
    // sort(v.begin(), v.end(), compare);
    // for(auto i:v){
    //     cout << i;
    // }
    // cout << endl;

    
    // maps
    // creation
    map<int, char> myMap;
    // insertion
    myMap[1]='v';
    myMap[13]='p';
    myMap[26]='t';
    // access
    cout << "answer is : " << myMap[26] << endl;
}