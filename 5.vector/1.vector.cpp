#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;

    arr.push_back(5);
    arr.push_back(6);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int n;
    cout << "enter the size : " << endl;
    cin >> n;

    vector<int> brr(n,-101);
    cout << "Size of brr : "<< brr.size() << endl;
    cout << "capacity of brr : "<< brr.capacity() << endl;

    for(int i=0; i<brr.size(); i++){
        cout << brr[i] << " ";
    }
    cout << endl;


    cout << "printing crr : " << endl;
    vector<int> crr{10,20,30,40,50};
    for(int i=0; i<crr.size(); i++){
        cout << crr[i] << " ";
    }
    cout << endl;
    cout << "vector crr empty or not : " << crr.empty() << endl;

}