// Time Complexity
//      Best Case: O(n) (when array is already sorted and optimized version is used)
//      Average Case: O(n²)
//      Worst Case: O(n²)

// Space Complexity
//      O(1) (in-place)

#include<iostream>
using namespace std;

int main(){
    int arr[]={90,72,98,13,87,66,52,51,36};
    int n= sizeof(arr)/sizeof(int);

    // for round 1 to n-1
    for(int i=1; i<n; i++){

        bool swapped = false;

        for(int j=0; j<n-i; j++){

            // process element till n-i index
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped = true;
            }
        }
        if(swapped==false){
            // already sorted
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}