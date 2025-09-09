// Find unique elements of an array
#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout << "enter the size of array : \n";
    cin >> n;

    vector<int>arr(n);
    cout << "enter the elements of array : \n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int uniqueElement=findUnique(arr);
    cout << "unique element is : "<< uniqueElement << endl;
}