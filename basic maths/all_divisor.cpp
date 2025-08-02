#include <bits/stdc++.h>
using namespace std;
// void divisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }
// }

void divisors(int n)
{
    vector<int> ls;
    // i * i <= n  ==  i <= sqrt(n)
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
int main()
{
    int n;
    cin >> n;

    divisors(n);
    return 0;
}