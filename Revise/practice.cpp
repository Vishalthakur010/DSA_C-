#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> Sieve(int n){

    vector<bool>sieve(n, true);
    sieve[0] = sieve[1]=false;

    for(int i=2; i*i<n; i++){

        if(sieve[i]){
            int j= i*i;
            while(j<=n){
                sieve[j]=false;
                j=j+i;
            }
        }
    }
    return sieve;
}

vector<bool>segSieve(int L, int R){
    vector<bool> sieve=Sieve(sqrt(R));
    vector<int>base_primes;

    // push all prime numbers till sqrt(R) in base_primes
    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]){
            base_primes.push_back(i);
        }
    }

    vector<bool>segSieve(R-L+1, true);
    if(L==0 ) segSieve[L]=false;
    if(L==1 ) segSieve[L]=false;

    for(auto prime : base_primes){
        int first_mul = (L/prime)*prime;
        if(first_mul<L){
            first_mul += prime;
        }
        int j= max(first_mul, prime*prime);
        while(j<=R){
            segSieve[j-L]=false;
            j += prime;
        }
    }
    return segSieve;
}

int main(){
    // int n=20;
    // vector<bool> sieve=Sieve(n);
    // for(int i=0; i<n; i++){
    //     if(sieve[i]){
    //         cout << i << " ";
    //     }
    // }
    // cout << endl;

    int L=115, R=150;
    vector<bool>ss=segSieve(L, R);
    for(int i=0; i<ss.size(); i++){
        if(ss[i]){
            cout << L+i << " ";
        }
    }
    cout << endl;
}

// lecture 90 pending