// find the first and last occurence of an element
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstOccurence(vector<int>v, int target){
    int start=0, end=v.size()-1;
    int mid= start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(v[mid] > target){
            end = mid - 1;
        }
        else if(v[mid] < target){
            start = mid + 1;
        }
        else{
            ans = mid;
            end = mid - 1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}

int lastOccurence(vector<int>v, int target){
    int start=0, end=v.size()-1;
    int mid= start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(v[mid] > target){
            end = mid - 1;
        }
        else if(v[mid] < target){
            start = mid + 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}

int main(){
    vector<int> v{1,3,3,3,3,3,4,4,4,4,6,7};
    int target = 3;

    int first = firstOccurence(v,target);
    int last = lastOccurence(v,target);
    
    cout << "first occurence : : " << first << endl;
    cout << "last occurence : : " << last << endl;
    cout << "Total occurence : " << last-first+1 << endl;


    // inbuilt functions
    // auto first = lower_bound(v.begin(), v.end(), target);
    // auto last = upper_bound(v.begin(), v.end(), target);

    // cout << "first occurence : : " << first-v.begin() << endl;
    // cout << "last occurence : : " << last-v.begin()-1 << endl;

}