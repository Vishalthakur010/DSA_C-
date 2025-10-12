#include<iostream>
using namespace std;

void solve(int& value){    //pass by refrence
    value = 65;
}

void trial(int*& ptr){
    ptr=ptr+1;
}
int main(){
    // int a =5;
    // int& b=a;

    // cout << a << endl;
    // cout << b << endl;

    // a++;
    // cout << b << endl;

    // b++;
    // cout << a << endl;

    // solve(a);
    // cout << a << endl;

    int a=5;
    int* p = &a;

    cout << "before" << p << endl;
    trial(p);
    cout << "after" << p << endl;

}