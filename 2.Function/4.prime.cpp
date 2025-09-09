#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
        return true;
}

int main(){
    int n;
    cin >> n;

    // check prime
    // bool isPrime = checkPrime(n);
    // if(isPrime){
    //     cout << "Number is prime\n";
    // }
    // else{
    //     cout << "Number is not a prime\n";
    // }

    // print all prime till n
    for(int i=2; i<=n; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout << i <<" ";
        }
    }
}