#include <bits/stdc++.h>
using namespace std;
/*....By passing parameters....*/

void sumofN(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }

    sumofN(i - 1, sum + i);
}

int main()
{
    int n ;
    cin >> n;

    sumofN(n, 0);

    return 0;
}