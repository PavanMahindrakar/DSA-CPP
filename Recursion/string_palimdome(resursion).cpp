#include <bits/stdc++.h>
using namespace std;

bool pal(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    else if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return pal(i + 1, s);
}

int main()
{
    string s;
    cin >> s;

    cout << boolalpha << pal(0, s);

    return 0;
}