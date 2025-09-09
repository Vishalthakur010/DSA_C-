#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[7]={16,3,15,7,84, 5, 37};
    int size=7;

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

        cout << "MAX : " << max << endl;
        cout << "MIN : " << min << endl;
}