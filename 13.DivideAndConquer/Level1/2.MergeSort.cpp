// Merge sort using recursion   :- Leetcode :- 912
// TC :- o(n^2) SC :- o(n)
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, vector<int>& temp, int start, int mid, int end){
        int i=start, j=mid+1, k=start;
        while(i<=mid && j<=end){
            if(v[i] < v[j]) temp[k++] = v[i++];
            else temp[k++] = v[j++];
        }
        while(i<=mid) temp[k++] = v[i++];
        while(j<=end) temp[k++] = v[j++];
        while(start <= end){
            v[start] = temp[start];
            start++;
        }
}

void mergeSort(vector<int>& v, vector<int>& temp, int start, int end){
        if(start >= end) return;
        int mid = (start+end) >> 1; //divide by 2
        mergeSort(v, temp, start, mid);
        mergeSort(v, temp, mid+1, end);
        merge(v, temp, start, mid, end);
}

int main(){
    vector<int>arr{34, 56, 12, 29, 49, 15};

    vector<int>temp(arr.size(), 0);
    mergeSort(arr, temp, 0, arr.size()-1);

    // printing array
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}