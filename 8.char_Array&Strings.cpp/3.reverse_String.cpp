#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[100];
    cout << "Enter name : ";
    cin >> name;

    cout << "Before reversal : " << name << endl;

    int start=0, end=strlen(name)-1;
    while(start<=end){
        char ch = name[start];
        name[start]=name[end];
        name[end]=ch;
        start++;
        end--;
    }
    cout << "After reversal : " << name << endl;
}