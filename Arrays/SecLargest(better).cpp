#include<bits/stdc++.h>
using namespace std;

// second approach: first pass find largest , second pass find second largest
// This approach is more efficient than sorting as it only requires two passes through the array.
// It has a time complexity of O(2n)
int main() {
    int n ;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // first pass
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    // second pass
    int secondLargest = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    cout << "Second largest element: " << secondLargest << endl;

}