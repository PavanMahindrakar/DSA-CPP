#include<bits/stdc++.h>
using namespace std;

/*...Pass by Value...*/
/*...(&) in function parameters this indicates Pass by reference*/
void doSomething(string &s ){
    s[2]='b';
    cout << s << endl;


    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
    // num += 5;
    // cout << num << endl;
}
int main(){
    string s = "Pavan";
    doSomething(s);
    cout << s << endl ;

    // int num = 10;
    // doSomething(num);
    // cout << num << endl;
    return 0;
}