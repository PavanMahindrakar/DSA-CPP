#include<bits/stdc++.h>
using namespace std;
/*...by parameters....*/
void factorial(int i,int fact){
      if (i < 1)
    {
        cout << fact << endl;
        return ;
    }

    factorial(i - 1, fact * i);
}

int main()
{
    int n ;
    cin >> n;

    factorial(n, 1);

    return 0;
}
