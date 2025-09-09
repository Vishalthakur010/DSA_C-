#include<iostream>
using namespace std;

int main(){
 int n;
 cin >> n;
 
 if(n>9){
    cout << "Please enter value <= 9.\n";
    return 0;
 }
 for(int row=0; row<n; row++){
    
    int start_index = 8-row;
    int num = row+1;
    int count = num;
    for(int col=0; col<17; col++){
        if(col==start_index && count>0){
            cout << num;
            start_index +=2;
            count--;
        }
        else{
            cout << "*";
        }
    }
    cout << endl;
 }
}