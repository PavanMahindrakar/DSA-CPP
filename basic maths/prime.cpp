
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/* ,,,,brute force approach,,,,*/

bool checkPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }

    if (cnt == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    bool isPrime = checkPrime(n);
    if (isPrime)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
