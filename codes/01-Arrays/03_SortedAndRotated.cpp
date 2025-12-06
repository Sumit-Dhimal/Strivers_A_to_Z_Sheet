// Check if the array is sorted and rotated

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for(int i=0; i<n-1; i++) {
        if(nums[i] > nums[i+1]) {
            count ++;
        }
    }

    if(nums[n-1] > nums[0]) {
        count++;
    }

    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};

    // returns true if array is sorted and rotated 
    // NOTE: In c++ bool returns 1 for true and 0 for false
    cout << "The Array is sorted and rotated?: " << check(nums);
    return 0;
}
