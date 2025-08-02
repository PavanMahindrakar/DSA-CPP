#include<bits/stdc++.h>
using namespace std;
/*
Take the day no. and print the corresponding day.
for 1 print Monday,
for 2 print tuesday and so on for 7 print Sunday. 
*/

int main()
{
    // int day;
    // cin >> day;

    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //     break;
    // case 3:
    //     cout << "Wednesday";
    //     break;
    // case 4:
    //     cout << "Thursday";
    //     break;
    // case 5:
    //     cout << "Friday";
    //     break;
    // case 6:
    //     cout << "Saturday";
    //     break;
    // case 7:
    //     cout << "Sunday";
    //     break;
    
    // default:
    //     cout << "Invalid";
    //     break;
    // }


    // return 0;

     int x = 2;
    int y = 3;

    switch (x) {
        case 1:
            cout << "x is 1." << endl;
            switch (y) {
                case 1:
                    cout << "y is 1." << endl;
                    break;
                default:
                     cout << "y is not 1." << endl;
            }
            break;
        default:
            cout << "x is not 1." << endl;
    }

    return 0;
}