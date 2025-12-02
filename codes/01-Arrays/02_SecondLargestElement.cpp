/*
    Find second largest element in an array without sorting
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargestElement(vector<int>& nums) {
    int n = nums.size();
    if(n < 2) {
        return -1;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    // find largest
    for(int i=0; i<n; i++) {
        if(nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
        }
    }

    // final check
    if(secondLargest == INT_MIN) {
        return -1;
    } else {
        return secondLargest;
    } 
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    
    cout << "The second largest element is: " << secondLargestElement(nums) << endl;
    return 0;
}