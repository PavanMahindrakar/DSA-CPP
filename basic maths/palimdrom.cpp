#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int revNum = 0;

    int duplicate = n;

    while (n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;

        if (duplicate == revNum)
        {
            cout << "This is a Palindrome number ..";
        }
        else
        {
            cout << "this number is not palindrome number..";
        }
    }
}