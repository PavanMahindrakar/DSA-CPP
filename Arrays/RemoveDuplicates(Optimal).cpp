#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
    int i = 0;
    for(int j = 0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1; // new size
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}