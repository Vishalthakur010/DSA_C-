#include<iostream>
using namespace std;

int fib(int n){
    // Base case
    if(n == 1 ) return 0; // first term
    if(n == 2) return 1; // second term

    // RR -> f(n) = f(n-1) + f(n-2)
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cout << "Enter the nth term you want to see : ";
    cin >> n;

    int ans = fib(n);
    cout << n << "th term is : " << ans << endl;
}