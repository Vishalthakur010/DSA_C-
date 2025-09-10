#include<iostream>
#include<climits>
using namespace std;

int maxNo(int arr[][4], int row, int col){
    int max = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int minNo(int arr[][4], int row, int col){
    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int arr[5][4]={
        {1,2,3,4},
        {2,-31,4,1},
        {5,6,1,3},
        {2,4,6,18},
        {1,9,9,6}
    };

    int row=5;
    int col=4;

    int max = maxNo(arr, row, col);
    cout << "Max no : " << max << endl;

    int min = minNo(arr, row, col);
    cout << "Min no : " << min << endl;
}