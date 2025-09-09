#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // increasing digit
        int start=1
        for(int col=0; col<row+1; col++){
            // cout << col+1;
            cout << start
        }
        // decreasing digit
        for(int col=0; col<row; col++){
            cout << row-col;
        }
        cout << endl;
    }
}