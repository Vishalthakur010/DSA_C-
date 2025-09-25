#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int>trees, long long int m, long long int mid){
    long long int woodCollected =0;
    for(long long int i=0; i<trees.size(); i++){
        if(trees[i]>mid){
            woodCollected += trees[i]-mid;
        }
    }
    return woodCollected>=m;
}

long long int maxSawBladeHeight(vector<long long int>& trees, long long int m){
    long long int start, end, ans=-1;
    start=0;
    end = *max_element(trees.begin(), trees.end());

    while(start <= end){
        long long int mid = start + (end-start)/2;
        if(isPossibleSolution(trees, m, mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    long long int n,m;
    cout << "Enter number of trees : " ;
    cin >> n ;

    cout << "Enter least meter of woods : " ;
    cin >> m ;
    vector<long long int> trees;

    while(n--){
        long long int height;
        cout << "Enter height of trees : " ;
        cin >> height;
        trees.push_back(height);
    }

    cout <<"Max height of sawBlade : " << maxSawBladeHeight(trees, m) << endl;
}