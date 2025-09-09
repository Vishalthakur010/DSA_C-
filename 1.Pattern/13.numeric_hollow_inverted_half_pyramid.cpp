#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<(n-row); col++){
    //         if(row==0 || col==0 || col==(n-row-1)){
    //             cout << row+1+col;
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // another mwthod
    int k=n;
    for(int row=0; row<n; row++){
        int c=1;
        for(int col=0; col<k; col++){
            if(col<n-row-1){
                cout << " ";
            }
            else if(col < n){
                    cout << c;
                    c++;
            }
            else if(col == n){
                c = c-2;
                cout << c;
                c--;
            }
            else{
                cout << c;
                c--;
            }
        }
        k++;
        cout << endl;
    }
}