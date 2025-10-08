#include<iostream>
#include<string.h>
using namespace std;

// lower to upper 
void convertToUpperCase(char arr[]){
    int length=strlen(arr);
    for(int i=0; i<length; i++){
        if(arr[i]>=97){           // character should be in lowercase
            arr[i]=arr[i]-'a'+'A';
        }
    }
}

// upper to lower
void convertToLowerCase(char arr[]){
    int length=strlen(arr);
    for(int i=0; i<length; i++){
        if(arr[i]<97){           // character should be in uppercase
            arr[i]=arr[i]-'A'+'a';
        }
    }
}

int main(){
    char lower[100]="Vishal";
    convertToUpperCase(lower);
    cout << lower << endl;

    char upper[100]="ViSHAL";
    convertToLowerCase(upper);
    cout << upper << endl;
}