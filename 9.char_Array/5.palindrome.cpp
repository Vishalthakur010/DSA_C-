#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[100];
    cin >> ch;

    int start=0;
    int end = strlen(ch)-1;

    while(start<=end){
        if(ch[start]==ch[end]){
            start++;
            end--;
        }
        else{
            cout << "Not a palindrome" << endl;
            return 0;
        }
    }
    cout << "A palindrome" << endl;
}