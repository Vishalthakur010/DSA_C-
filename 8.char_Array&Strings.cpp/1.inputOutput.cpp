#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[100];
    
    cout << "Enter your name : ";

    // taking input entirely at once
    // cin >> name;
    
    // taking input one character at a time
    // cin >> name[0];
    // cin >> name[1];
    // cin >> name[2];
    // cin >> name[3];
    // cin >> name[4];
    // cin >> name[5];

    // cout << "Your name is : " << name << endl;

    // checking null character 
    // cin >> name;
    // for(int i=0; i<7; i++){
    //     cout << "Index : " << i << " value : " << name[i] << endl;
    // }

    // int value = (int)name[6];
    // cout << "character at last index : " << value << endl;


    // cin does not take space
    // cin >> name;
    cin.getline(name,50);
    cout << name << endl;
}