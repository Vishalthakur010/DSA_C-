// find the missing element

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,2,3,4,6,7,8};
    int first_element=arr[0];
    int start=0;
    int end=arr.size()-1;
    
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid]== first_element+mid){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout << "Missing element : " << first_element+start << endl;
}