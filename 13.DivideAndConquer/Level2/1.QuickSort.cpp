// Quick sort using recursion
#include<iostream>
using namespace std;

int partition(int* arr, int s, int e){
    // step 1 : choose pivot element
    int pivotIndex = s;
    int pivotElement = arr[pivotIndex];

    // step 2 : Find right position for pivot element and place it there
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // After the loop now we have the right index of the pivot
    int rightIndex = s + count;
    swap(arr[rightIndex], arr[pivotIndex]);
    pivotIndex = rightIndex;

    // step 3 ; smaller in left and larger in right
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }

        // 2 case :- 
        // A : found the element to swap
        // B : no need to swap
        if( i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int* arr, int s, int e){
    // Base case
    if(s >= e) return;

    // partition logic, return pivotIndex
    int p = partition(arr, s, e);

    // recursion call
    // pivot element -> left
    quickSort(arr, s, p-1);

    // pivot element -> right
    quickSort(arr, p+1, e);
}

int main(){
    int arr[] = {8, 1, 20, 50, 4, 4, 1, 8, 30, 50, 3, 4, 20, 50, 30};
    int n = sizeof(arr)/sizeof(int);

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);
    
    // printing
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}