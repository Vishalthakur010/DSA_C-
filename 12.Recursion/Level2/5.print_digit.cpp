#include<iostream>
using namespace std;

void print(int n){
    if(n<=0) return;
    
    print(n/10);

    int digit = n%10;
    cout << digit << " ";
}

int main(){
    int n=0647;
    
    print(n);
    cout << endl;
}