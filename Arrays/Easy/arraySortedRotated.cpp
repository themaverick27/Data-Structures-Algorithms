#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    // Check if the array is non-decreasing
    for(int i = 1; i < n; i++){
        if(nums[i - 1] > nums[i]) count++; 
        // If the count of violations crosses 1, return false
        if(count > 1) return false;
    }
    // Check if the last element is greater than the first element
    if (nums[n - 1] > nums[0]) count++;

    // If the count of violations is less than or equal to 1, return true
    if (count <= 1) return true;
    return false;
}

int main(){
    vector<int> nums {3, 4, 5, 1, 2};
    check(nums);
}
// Time Complexity: O(n)
// Space Complexity: O(1)