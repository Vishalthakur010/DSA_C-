#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[50];
    // cin >> name;
    cin.getline(name,50);

    int length=0;
    int i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    cout << "length is : " << length << endl;
    cout << "length is : " << strlen(name) << endl;
}