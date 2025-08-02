#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int duplicate = n; // Store original number
    int sum = 0;

    while (n > 0)
    {
        int ld = n % 10;        // Get the last digit
        sum = sum + pow(ld, 3); // Add the cube of the digit to sum
        n = n / 10;             // Remove the last digit
    }

    if (sum == duplicate)
    {
        cout << "This is an Armstrong number." << endl;
    }
    else
    {
        cout << "This is not an Armstrong number." << endl;
    }

    return 0;
}
