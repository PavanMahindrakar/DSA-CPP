#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    set<int> st;                  // stores unique elements
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    int index = 0;
    for (auto it : st) {
        arr[index] = it;
        index++;
    }

    return index; // new size
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
