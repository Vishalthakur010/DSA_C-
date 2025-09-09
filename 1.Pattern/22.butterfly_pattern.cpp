#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int row=0; row<2*n; row++){
        int cond = row<n ? row : 2*n-row-1;
        int space = row<n ? 2*(n-cond-1) : row-cond-1;
        for(int col=0; col<2*n; col++){
            if(col <= cond){
                cout << "*";
            }
            else if(space >0){
                cout << " ";
                space--;
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}