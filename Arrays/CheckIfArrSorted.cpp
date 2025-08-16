#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i = 1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout <<"Enter the size of arrar: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(isSorted(arr,n)){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout << "Array is Not Sorted" << endl;
    }
}