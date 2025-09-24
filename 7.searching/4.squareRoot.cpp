// find square root of a number using binary search

#include<iostream>
using namespace std;

int findSquareRoot(int n){
    int start=0, end=n-1;
    int ans;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid*mid > n){
            // left search
            end = mid - 1;
        }
        else if(mid*mid<n){
            // right search
            ans = mid;
            start = mid +1;
        }
        else{
            return mid;
        }
    }
    return ans;
}

int main(){
    int n ;
    cout << "Enter the number to find the square root : " << endl;
    cin >> n;

    int squareRoot = findSquareRoot(n);
    cout << "squareRoot of " << n << " : " << squareRoot << endl;

    int precision;
    double ans = squareRoot;
    cout << "Enter the number of floating digits in precision : " << endl;
    cin >> precision;

    double step = 0.1;
    for(int i=0; i<precision; i++){

        for(double j=ans; j*j <= n; j = j+step){
            ans = j;
        }

        step = step/10;
    }
    cout << "Final answer is : "<< ans << endl;
}