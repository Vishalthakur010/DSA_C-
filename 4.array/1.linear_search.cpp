#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={1,3,5,7,8};
    int size=5;

    cout << "Enter the key to search : \n";
    int key;
    cin >> key;

    if(find(arr,size, key)){
        cout << "key found.\n";
    }
    else{
        cout << "Key not found.\n";
    }
}