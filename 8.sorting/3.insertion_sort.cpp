#include<iostream>
using namespace std;

int main(){
    int arr[]={90,72,98,13,87,66,52,51,36};
    int n= sizeof(arr)/sizeof(int);

    // for round 1 to n-1
    for(int i=1; i<n; i++){

        int temp = arr[i];
        int j=i-1;

        for(; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}