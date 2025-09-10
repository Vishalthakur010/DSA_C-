#include<iostream>
using namespace std;

int main(){
    // int arr[3][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {2,4,8}
    // };

    // // row-wise print
    // cout << "Row-wise printing :" << endl;
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<3;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // column-wise print
    // cout << "column-wise printing :" << endl;
    // for(int i=0; i<3;i++){
    //     for(int j=0; j<3;j++){
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }


    // int arr[4][3];
    // int row=4;
    // int col=3;

    // // row-wise input
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         cin >> arr[i][j];
    //     }
    // }


    int arr[3][3];
    int row=3;
    int col=3;

    // col-wise input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[j][i];
        }
    }

    // row-wise print
    cout << "Row-wise printing :" << endl;
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}