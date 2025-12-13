// Remove duplicates of an array

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j = 1;

    for(int i=0; i<nums.size()-1; i++) {
        if(nums[i] != nums[i+1]) {
            nums[j] = nums[i+1];
            j++;
        }
    }

    return j; // size non-duplicate elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5};

    cout << "Size of array after removing duplicates: " << removeDuplicates(nums) << endl;

    return 0;
}