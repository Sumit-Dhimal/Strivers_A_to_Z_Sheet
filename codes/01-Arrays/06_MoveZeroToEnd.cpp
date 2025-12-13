// moves zeros to the end of an array

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    vector<int> temp(n);

    // fill only non-zero elements and update count
    for(int i=0; i<n; i++) {
        if(nums[i] != 0) {
            temp[count++] = nums[i];
        }
    }

    // fill zero int the remaining places
    for(int i=count; i<n; i++) {
        temp[i] = 0;
    }

    // copy values of temp
    for(int i=0; i<n; i++) {
        nums[i] = temp[i];
    }
}

int main() {
    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);
    
    cout << "After moving zeros" << endl;
    for(int e: nums) {
        cout << e << " ";
    }
    return 0;
}
