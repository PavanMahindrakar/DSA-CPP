#include<bits/stdc++.h>
using namespace std;

int maxx(int n1, int n2){
    if(n1 >= n2)
    {
        return n1;
    }

    else {
        return n2;
    }

}

int main(){
    int n1, n2;
    cin >> n1 >> n2 ;

    int minimum = max(n1 , n2);
    cout << minimum ;

    return 0;
}
/*take two numbers and print its sum*/
// int sum(int n1 ,int n2){
//     int sum = n1 + n2;

//     return sum;
// }
// int main(){
//     int n1 , n2;
//     cin >> n1 >> n2;

//     int res = sum(n1 ,n2);
//     cout << res ;

//     return 0;
// }

// void printName(string name)
// {
//     cout << "Its Me " << name << endl;
// }
// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);
    
//     string name2;
//     cin >> name2;
//     printName(name2);

//     return 0;
// }
