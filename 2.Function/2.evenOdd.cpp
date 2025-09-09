#include<iostream>
using namespace std;

bool checkEven(int n){
    if(/*n%2 == 0*/ (n&1)==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >>n;

    bool isEven = checkEven(n);

    if(isEven){
        cout << "Number is even.\n";
    }
    else{
        cout << "Number is odd.\n";
    }
}