#include <bits/stdc++.h>
using namespace std;

// first approach: brute force sorting apply quick sort and then find the second largest element
// quick sort
// time complexity: O(n log n) + O(n)
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; ++j) {
            if (arr[j] < pivot) {
                ++i;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);
        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    int Largest = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != Largest) {
            cout << "Second largest element: " << arr[i] << endl;
            break;
        }
    }
}
// time complexity: O(n log n) for sorting and O(n) for finding second largest