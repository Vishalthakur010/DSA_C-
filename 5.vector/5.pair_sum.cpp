// Find a pair that upon addition gives value equal to sum
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,20,30,40,50,60,70};
    int sum=90;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            // cout << "All pairs : (" << arr[i] << "," << arr[j] << ")" << endl;
            if(arr[i] + arr[j] == sum){
                cout << "Pairs sum : (" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}