                        // part 2 of level 2
// pointer with functions

#include<iostream>
using namespace std;

void solve(int* arr){
    cout << "size inside solve function : " << sizeof(arr) << endl;

    cout << "arr : " << arr << endl;
    cout << "&arr : " << &arr << endl;

    arr[0]=50;
}

void updatePtr(int* p){
    cout << "address stored inside p : " << p << endl;
    cout << "address of p : " << &p << endl;
    *p = *p + 10;
}
int main(){
    // int arr[10]={5,3,6,2};
    // cout << "size inside main function : " << sizeof(arr) << endl;

    // cout << "arr : " << arr << endl;
    // cout << "&arr : " << &arr << endl;

    // cout <<  "printing array before main function" << endl;
    // for(int i=0; i<10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << "calling solve function" << endl;
    // solve(arr);

    // cout << "printing array after main function" << endl;
    // for(int i=0; i<10; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    int a=10;
    int* ptr = &a;

    cout << "address of a : " << &a << endl;
    cout << "address stored in ptr : " << ptr << endl;
    cout << "address of ptr : " << &ptr << endl;
    updatePtr(ptr);
    cout << "value of a : " << a << endl;
}