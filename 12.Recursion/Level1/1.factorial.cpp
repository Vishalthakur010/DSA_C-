// TC :- T(n) = k + T(n-1)
#include<iostream>
using namespace std;

int factorial(int n){
    cout << "Function is called for "<< n << endl;
    // Base condition
    if(n==1) return 1;

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main(){
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial is : " << ans << endl;
}