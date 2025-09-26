#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int>cooksRanks, int nP, int mid){
    int currp=0; // initial cooked prata count
    for(int i=0; i<cooksRanks.size(); i++){
        int R = cooksRanks[i];
        int j=1; // count the number of prata for each cooks
        int timeTaken = 0;

        while(true){
            if(timeTaken + (j*R) <= mid){
                ++currp;
                timeTaken += j*R;
                j++;
            }
            else{
                break;
            }
        }

        if(currp >= nP){
            return true;
        }
    }

    return false;
}

int minTimeToCompleteOrder(vector<int>cooksRanks, int nP){
    int start=0;
    int end;
    int highestRanker = *max_element(cooksRanks.begin(), cooksRanks.end());
    end = highestRanker * ( nP* (nP+1)/2 );
    int ans=-1;

    while(start<=end){
        int mid=start + (end-start)/2;
        if(isPossibleSolution(cooksRanks, nP, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int T; cin >> T;  // no of test cases

    while(T--){
        int nP, nC;
        cin >> nP ; // no of prata 
        cin >> nC; // no of cooks
        vector<int>cooksRanks;

        while(nC--){
            int R; cin >> R;
            cooksRanks.push_back(R);
        }

        cout << minTimeToCompleteOrder(cooksRanks, nP) << endl;
    }
}