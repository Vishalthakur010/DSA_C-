#include<iostream>
#include<string>
using namespace std;

bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    for(int i=0; i<a.length(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    // string str;
    // cin >> str;
    // cout << str << endl;

    // cout << "length : " << str.length() << endl;
    // cout << "isEmpty : " << str.empty() << endl;

    // str.push_back('A');
    // cout << str << endl;
    
    // str.pop_back();
    // cout << str << endl;

    // cout << str.substr(2,5) << endl;

    // string a = "vishal";
    // string b = "Vishal";
    // if(a.compare(b)==0){
    //     cout << "a and b are same" << endl;
    // }
    // else{
    //     cout << "a and b are not same" << endl;
    // }


    // // custom compare function
    // string a = "vishal";
    // string b = "vishal";
    // if(compareString(a,b)){
    //     cout << "a and b are same" << endl;
    // }
    // else{
    //     cout << "a and b are not same" << endl;
    // }

    // string x="dbcd";
    // string y="cbcd";
    // cout << x.compare(y) << endl;

    // // find function
    string sentence="hello, vishal how are you.";
    string target="hi";
    cout << sentence.find(target) << endl;
    if(sentence.find(target) == string::npos){
        cout << "not found" << endl;
    }else{
        cout << "found" << endl;
    }

    // // replace function
    // string str="this is my name";
    // string word="vishal";

    // str.replace(0,4,word);
    // str.replace(10,2,"cool");
    // cout << str << endl; 

    // // erase function
    // string str="ABCDEFGHIJKL";
    // str.erase(3,7);
    // cout << str << endl;
}
// 1:39