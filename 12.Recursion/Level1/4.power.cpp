// find the power of a number
#include<iostream>
using namespace std;

int findPower(int  n, int pow){
    // base case
    if(pow == 0) return 1;

    // solve 1 case
    return n * findPower(n, pow-1);
}

int main(){
    int n=5;
    int pow=3;
    int ans = findPower(n, pow);
    cout << ans << endl;
}