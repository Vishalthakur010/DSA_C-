// divide two numbers using binary search

#include<iostream>
using namespace std;

int solve(int dividend, int divisor){
    int s=0, e=abs(dividend);
    int ans=-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        else if(abs(mid*divisor) > abs(dividend)){
            e=mid-1;
        }
        else{
            ans =mid;
            s=mid+1;
        }
    }
    if((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0)){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){
    int dividend =22;
    int divisor =-7;

    double quotient = solve(dividend, divisor);
    cout << "quotient is : "<< quotient << endl;

    double ans;
    int precision = 2;
    double step = 0.1;
    for(int i=0; i<precision; i++){
        for(double j=quotient; abs(j*divisor) <= abs(dividend); j=j+step){
            ans =j;
        }
        step = step/10;
    }

    if(quotient<0){
        ans = -ans;
    }

    cout << "final answer is : " << ans << endl;
}