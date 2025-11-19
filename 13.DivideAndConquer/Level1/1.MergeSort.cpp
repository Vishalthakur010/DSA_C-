// Merge sort using recursion
#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = (s+e)/2;

    // creating two lengths for 2 new arrays
    int len1 = mid-s+1;
    int len2 = e-mid;

    // create array for len1, len2 length
    int* left = new int[len1];
    int * right = new int[len2];

    // copy values to left
    int k=s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    // copy values to right
    k=mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    // now merge two array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // copy logic for left array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    // copy logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // TODO :- delete left and right newly created array
}

void mergeSort(int* arr, int s, int e){
    // base case
    // s == e -> single element left
    // s > e -> invalid array
    if(s >= e) return;

    int mid = (s+e)/2;

    // sort left part through recursion
    mergeSort(arr, s, mid);

    // sort right part through recursion
    mergeSort(arr, mid+1, e);

    // merge left and right part through recursion
    merge(arr, s, e);
}

int main(){
    int arr[]={34,5,63,2,19,46};
    int n = sizeof(arr)/sizeof(int);

    int s = 0;
    int e = n-1;

    mergeSort(arr, s, e);

    // printing array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}