#include<bits/stdc++.h>
using namespace std;
// WAP that takes an input of age and print if you are adult or not
// >=18 , yes
// < 18 , no
// int main()
// {
//     int age;
//     cin >> age;
//     if(age >= 18)
//     {
//         cout<< "You are an adult!";

//     }
//     else if(age<10){
//         cout << "Yor are not an adult";
//     }

//     return 0;
// }

    /*A school has following rules for granting systems:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.
    */

//    int main()
//    {
//     int marks;
//     cin >> marks;
//     if(marks < 25){
//         cout<< "F";
//     }
//     else if(marks <=44){
//         cout<< "E";
//     }
//     else if( marks <= 49){
//         cout << "D";
//     }
//     else if( marks <= 59){
//         cout << "C";
//     }
//     else if(marks >= 60 && marks <= 79){
//         cout << "B";
//     }
//     else if( marks<= 100){
//         cout << "A";
//     }


//     return 0;
//    }




/*
Take the age from the user and then decide accordingly
1. if age < 18,
...print-> not eligible for job
2. if age >= 18,
...print-> eligible for job
3. if age >= 55 and age <= 57,
...print-> eligible for job, but retirement soon
4. if age > 57,
...print-> retirement time
*/

int main()
{
    int age;
    cin >> age;

    if (age < 18){
        cout << "Yor are not eligible for job!";
    }    
 
    else if(age <= 57){
        cout << "yor are eligible,";
        // Nested if-else
        if(age >=55)
        {
            cout << " but your retirement will be soon!";
        }
    }
    else {
        cout << "It's your retirement time!";
    }

    return 0;
}