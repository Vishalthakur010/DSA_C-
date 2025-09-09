// sort 0 and i
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{0,1,1,0,1,0,0,0,1,1,0,1,0,1};

    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(i<end){
        if(arr[i]==0){
            int temp=arr[i];
            arr[i]=arr[start];
            arr[start]=temp;
            start++;
            i++;
        }
        if(arr[i]==1){
            int temp=arr[i];
            arr[i]=arr[end];
            arr[end]=temp;
            end--;
        }
    }

    for(auto value: arr){
        cout << value << " " ;
    }
}