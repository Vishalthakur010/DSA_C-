#include<iostream>
using namespace std;
    // Doubt
int main(){
    int n;
    cin >> n;

    // increasing
    int count =1;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout << count;
            if(col!=row){
                cout << "*";
            }
            count++;
        }
        cout << endl;
    }
    // decreasing
    int start = count - n;
    for(int row=0; row<n; row++){
        int k=start;
        for(int col=0; col<n-row; col++){
            cout << k;
            if(col != n-row-1){
                cout << "*";
            }
            k++;
        }
        start = start -(n-row-1);
        cout << endl;
    }
}