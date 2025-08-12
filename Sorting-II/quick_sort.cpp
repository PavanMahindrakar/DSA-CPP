#include<bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int Partition(vector<int> &nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) {
                i++;
            }

            while (nums[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) swap(nums[i], nums[j]);
        }
        swap(nums[low], nums[j]);
        return j;
    }
    void qs(vector<int> &nums, int low, int high) {
        if (low < high) {
            int pIndex = Partition(nums, low, high);
            qs(nums, low, pIndex - 1);
            qs(nums, pIndex + 1, high);
        }
    }
    vector<int> quickSort(vector<int> &nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {10, 7, 8, 9, 1, 5};
    vector<int> sorted_nums = sol.quickSort(nums);
    
    cout << "Sorted array: ";
    for (int num : sorted_nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}