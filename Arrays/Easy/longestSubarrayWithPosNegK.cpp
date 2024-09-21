/*
Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

Example 1:
Input Format: N = 3, k = 5, array[] = {2,3,5}
Result: 2
Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

Example 2:
Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
Result: 3
Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.
*/
#include<bits/stdc++.h>
using namespace std;

int longestSubarraySum(vector<int> arr, int n, int k){
    // Approach-2 - using Hashmap
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int remaining = sum - k;
        if(preSumMap.find(remaining) != preSumMap.end()){
            int len = i - preSumMap[remaining];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }

    return maxLen;
    // Time Complexity: O(N*logN) and Space Complexity: O(N) - using map data structure

    // Approach-1 - generate all subarray
    /*
    int maxLen = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];

            if(sum == k) maxLen = max(maxLen, j-i+1);
        }
    }
    return maxLen;

    // Time Complexity: O(N*N) approx and Space Complexity: O(1)
    */
}

int main(){
    vector<int> arr = {2,3,5,1,9};
    int n = arr.size();

    int k = 10;

    int len = longestSubarraySum(arr, n, k);
    cout << "Longest subarray with sum k: " << len << endl;
}