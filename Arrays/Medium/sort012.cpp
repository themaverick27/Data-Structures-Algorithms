/*
Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array 
without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]

Example 3:
Input: nums = [0]
Output: [0]
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> sort012(vector<int>& arr, int n){
    // Approach-2 (Dutch National Flag Algorithm) - Time Complexity: O(N) and Space Complexity: O(1)
    // three pointers
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // Approach-1
    /*
    int countZero = 0, countOne = 0, countTwo = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) countZero++;
        else if(arr[i] == 1) countOne++;
        else countTwo++;
    }

    // placing the 0, 1, 2 element in the array in-place
    for(int i = 0;  i < countZero; i++) arr[i] = 0;

    for(int i = countZero; i < (countZero + countOne); i++) arr[i] = 1;

    for(int i = (countZero+countOne); i < n; i++) arr[i] = 2;

    // Time Complexity: O(2N) and Space Complexity: O(1)
    */
}

int main(){
    int n = 6;
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    sort012(arr, n);
    // printing the array
    for(auto it: arr){
        cout << it << " ";
    }
}