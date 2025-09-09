#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // first half
    for(int row=0; row<n; row++){

        // first star
        for(int col=0; col<(n-row); col++){
            cout << "*";
        }
        // middle space
        for(int col=0; col<(2*row+1); col++){
            cout << " ";
        }
        // last star
        for(int col=0; col<(n-row); col++){
            cout << "*";
        }
        cout << endl;
    }

    // second half
    for(int row=0; row<n; row++){
        
        // first star
        for(int col=0; col<(row+1); col++){
            cout << "*";
        }
        // space
        for(int col=0; col<(2*n-(2*row+1)); col++){
            cout << " ";
        }
        // last star
        for(int col=0; col<(row+1); col++){
            cout << "*";
        }
        cout << endl;
    }
}