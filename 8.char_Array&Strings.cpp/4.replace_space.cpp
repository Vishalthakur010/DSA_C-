// replace ' ' with @

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[100];
    cin.getline(name,50);
    int length = strlen(name);

    for(int i=0; i<length; i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
    cout << name << endl;
}