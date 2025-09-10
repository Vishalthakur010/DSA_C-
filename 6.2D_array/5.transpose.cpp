#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {2,1,4,1},
        {5,6,1,3},
        {2,4,6,18}
    };

    int brr[4][4];

    int row=4;
    int col=4;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            brr[j][i]=arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}