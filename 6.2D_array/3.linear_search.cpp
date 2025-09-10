#include<iostream>
using namespace std;

bool linearSearch(int arr[][4], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(key== arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[5][4]={
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {2,4,6,8},
        {1,9,9,6}
    };

    int row=5;
    int col=4;
    int key=10;

    bool exist = linearSearch(arr, row, col, key);
    if(exist){
        cout << key << " exist." << endl;
    }
    else{
        cout << key << " does not exist." << endl;
    }
}