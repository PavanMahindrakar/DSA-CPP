#include<bits/stdc++.h>
using namespace std;
/*....by recursive function.....*/
int sumofN(int n){
    if(n==0){
        return 0;
    }

    return n+sumofN(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << sumofN(n);
    sumofN(n);
}