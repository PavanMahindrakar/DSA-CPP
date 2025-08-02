#include<bits/stdc++.h>
using namespace std;

void printN(int i,int n){
    if(i < 1){
        return;
    }
    printN(i-1,n);    //i+1 or 1 to N ,but by backtracking
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    printN(n,n);
}

