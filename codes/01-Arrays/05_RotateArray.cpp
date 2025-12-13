// rotate array by k steps

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> temp(n);

    for(int i=0; i<n; i++) {
        // rotating and copying to temp array
        int j = (i+k) % n;
        temp[j] = nums[i];
    }

    // copying values from temp array
    for(int i=0; i<n; i++) {
        nums[i] = temp[i];
    }      
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    rotate(nums, k);
    cout << "Array after " << k << " step rotation.\n";
    for(int x: nums) {
        cout << x << " ";
    }

    return 0;
}