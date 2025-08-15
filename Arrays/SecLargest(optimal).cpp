#include<bits/stdc++.h>
using namespace std;

// third approach: optimal solution using a single traversal
// time complexity: O(n)
int SecondLargest(int arr[], int n) {
    int Largest = arr[0];
    int secondLargest = -1;
    for(int  i = 1; i < n;i++){
        if(arr[i] > Largest){
            secondLargest = Largest;
            Largest = arr[i];

        }
        else if(arr[i]<Largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int secondLargest = SecondLargest(arr, n);
    
    cout << "Second largest element: " << secondLargest << endl;
    return 0;
}