/*
Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Example 1:
Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 
Output: 6 
Explanation: [4,-1,2,1] has the largest sum = 6. 

Examples 2:
Input: arr = [1] 
Output: 1 
Explanation: Array has only one element and which is giving positive sum of 1.
*/
#include<bits/stdc++.h>
using namespace std;

void printMaximumSubarraySum(vector<int> arr, int n){
    // print the subarray as well of maximum subarray sum
    int maxSum = INT_MIN;
    int sum = 0;

    int start = 0;
    int ansStart = -1, ansEnd = -1; // to keep track of the subarray
    for(int i = 0; i < n; i++){
        if(sum == 0) start = i;
        sum += arr[i];

        if(sum > maxSum){ 
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0) sum = 0;
    }

    //printing the subarray:
    cout << "The subarray is: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int maximumSubarraySum(vector<int> arr, int n){
    // Approach-2 (Optimal Approach - Kadane's Algorithm) - Time Complexity: O(N) and Space Complexity: O(1)
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum > maxSum) maxSum = sum;

        if(sum < 0) sum = 0;
    }
    // if, considering the sum of the empty subarray also then (or including empty subarray)
    // if(maxSum < 0) maxSum = 0;

    return maxSum;

    // Approach-1 (Generate all subarray and find the sum for each subarray) - Time Complexity: O(N*N) and Space Complexity: O(1)
    /*
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];

            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
    */
}

int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();

    int sum = maximumSubarraySum(arr, n);
    cout << "The maximum subarray sum: " << sum << endl;   

    printMaximumSubarraySum(arr, n);
}