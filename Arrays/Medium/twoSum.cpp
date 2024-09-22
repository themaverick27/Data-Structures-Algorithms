/*
Problem Statement: Given an array of integers arr[] and an integer target. Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.
2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
Result: NO (for 1st variant)
	[-1, -1] (for 2nd variant)
Explanation: There exist no such two numbers whose sum is equal to the target.
*/
#include<bits/stdc++.h>
using namespace std;

string twoSumVariety1(vector<int> arr, int n , int target){
    // only for variety 1 (Optimal)
    // Approach-3 (Greedy Approach) - Time Complexity: O(N*logN) and Space Complexity: O(1)
    int left = 0, right = n-1;
    while (left < right){
        if(arr[left] + arr[right] < target) left++;
        else if(arr[left] + arr[right] > target) right++;
        else return "YES";
    }
    return "NO";
}

vector<int> twoSum(vector<int> arr, int n , int target){
    // Approach-2 (Hashmap) - Time Complexity: O(N*logN) and Space Complexity: O(N)
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        int element = arr[i];
        int moreNeeded = target - element;
        if(mpp.find(moreNeeded) != mpp.end()){
            return {mpp[moreNeeded], i};
        }
        mpp[element] = i;
    }
    return {-1, -1};

    // Approach-1 (Iterating) - Time Complexity: O(N*N) and Space Complexity: O(1)
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1, -1};
}

int main(){
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(arr, n, target);
    cout << "indices: [" << ans[0] << ", " << ans[1] << "]" << endl;
}
