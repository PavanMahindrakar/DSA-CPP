#include<bits/stdc++.h>
using namespace std;
// Array always passed by references
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "value inside the function : " << arr[0] << endl;

}
int main(){
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
     
    doSomething(arr, n);

    cout << "value inside the main function : "<< arr[0] << endl;
    return 0;
    
}