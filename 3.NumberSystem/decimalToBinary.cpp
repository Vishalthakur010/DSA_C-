#include<iostream>
using namespace std;
#include<cmath>

int decimalToBinaryMethod1(int n){
    // Division Method
    int binary=0;
    int i=0;
    while(n>0){
        int bit = n%2;
        binary = bit * pow(10,i++) + binary;
        n=n/2;
    }
    return binary;
}

int decimalToBinaryMethod2(int n){
    // Bitwise Method
    int binary=0;
    int i=0;
    while(n>0){
        int bit = n & 1;
        binary = bit * pow(10,i++) + binary;
        n= n >> 1;
    }
    return binary;
}

int main(){
    int n;
    cin >> n;

    int binary = decimalToBinaryMethod2(n);
    cout << binary << endl;
}