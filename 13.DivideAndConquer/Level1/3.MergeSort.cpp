// in-Place Merge Sort  :- Gap Method
// TC :- o(n) SC :- o(1)
#include<iostream>
#include<vector>
using namespace std;

void mergeInplace(vector<int>& v, int start, int mid, int end){
        int total_len = end-start+1;
        int gap = (total_len/2 + total_len%2);
        while(gap > 0){
            int i=start, j=i+gap;
            while(j <= end){
                if(v[i] > v[j]){
                    swap(v[i], v[j]);
                }
                ++i, ++j;
            }
            gap = gap <= 1 ? 0 : (gap/2) + (gap%2);
        }
}

void mergeSort(vector<int>& v, int start, int end){
        if(start >= end) return;
        int mid = (start+end) >> 1; //divide by 2
        mergeSort(v,start, mid);
        mergeSort(v, mid+1, end);
        mergeInplace(v, start, mid, end);
}

int main(){
    vector<int>arr{34, 56, 12, 29, 49, 15, 27, 49, 18};

    mergeSort(arr, 0, arr.size()-1);

    // printing array
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}