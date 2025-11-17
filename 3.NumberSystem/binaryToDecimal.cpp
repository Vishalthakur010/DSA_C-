#include<iostream>
using namespace std;
#include<cmath>


int binaryToDecimalMethod1(int n){
    // Division method
    int decimal=0;
    int i=0;
    while(n>0){
        int bit = n%10;
        decimal = decimal + bit * pow(2,i++);
        n= n/10;
    }
    return decimal;
}


int binaryToDecimalMethod2(int n){
    // Bitwise method
    int decimal=0;
    int i=1;
    while(n>0){
        int bit = n & 1;
        decimal = decimal + bit * i;
        i = i << 1;
        n = n >> 1;
    }
    return decimal;
}

int main(){

    int binary;
    cin >> binary;

    cout << binaryToDecimalMethod2(binary) << endl;
}