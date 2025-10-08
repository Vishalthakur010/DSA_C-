#include<iostream>
using namespace std;

int main(){
    // int a = 5;
    // int b = 5;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << &b << endl;

    // // pointer create
    // int a = 5;
    // int* ptr = &a;
    // // access the value ptr is pointing to
    // cout << "valur of a : " << a;
    // cout << "addess of a is : " << &a << endl;
    // cout << "value stored at ptr is : "<< ptr << endl;
    // cout << "addess of ptr is : " << &ptr << endl;
    // cout << "value ptr is pointing to : "<< *ptr << endl;


    // // checking size of pointers
    // int a=6;
    // int* p = &a;
    // cout << sizeof(p) << endl;

    // char ch = 'b';
    // char* c = &ch;
    // cout << sizeof(c) << endl;

    // double dtr = 5.03;
    // double* d = &dtr;
    // cout << sizeof(d) << endl;


    // // Bad practice
    // int* ptr;
    // cout << *ptr << endl;

    // null pointer
    // int* ptr = 0;
    // int* ptr = nullptr;
    // cout << *ptr << endl;


    // copy a pointer
    // int a=5;
    // int* ptr = &a;
    // int* secondPtr = ptr;
    // cout << *ptr << endl;
    // cout << *secondPtr << endl;


    int a=10;
    int* p=&a;
    int* q=p;
    int* r=q;

    cout << a << endl; // 10
    cout << &a << endl; // address of a
    cout << p << endl; // address of a
    cout << &p << endl; // address of p
    cout << *p << endl; //10
    cout << q << endl; // address of a
    cout << &q << endl; // address of q
    cout << *q << endl; // 10
    cout << r << endl; // address of a
    cout << &r << endl; // address of r
    cout << *r << endl; // 10
    cout << (*p + *q + *r) << endl; // 30
    cout << (*p)*2 + (*r)*3 << endl; // 50
    cout << (*p)/2 - (*q)/2 << endl; // 0
}