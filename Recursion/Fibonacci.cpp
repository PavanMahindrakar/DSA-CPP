#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<= 1){
        return n;
    }

    int last = fibo(n-1);
    int s_last=fibo(n-2);

    return last + s_last;
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}