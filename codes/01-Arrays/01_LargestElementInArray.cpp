/*
    Find largest element in an array
*/

#include <iostream>
#include <vector>
using namespace std;

int findLargest(vector<int>& nums) {
    int largest = nums[0];

    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

int main() {
    vector<int> nums = {1, 4, 5, 7, 0, 4};

    cout << "The largest number is: " << findLargest(nums) << endl;
    return 0;
}