#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // first method
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n-1; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // second method
    for(int row=0; row<2*n-1; row++){
        // int cond;
        // if(row<n){
        //     cond=row;
        // }
        // else{
        //     cond=n-(row%5)-2;
        // }
        int cond= row<n ? row : n-(row%5)-2;
        for(int col=0; col<=cond; col++){
            cout << "*";
        }
        cout << endl;
    }
}