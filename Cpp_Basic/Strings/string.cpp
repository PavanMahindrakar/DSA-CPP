#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p ="Pavan";
    int leng = p.size();
    p[leng - 4]= 'b';
    cout << p[leng-4];
    return 0;
}