/*
Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the 
lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

Example 1 :
Input format: arr[] = {1,3,2}
Output: arr[] = {2,1,3}
Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.

Example 2:
Input format: arr[] = {3,2,1}
Output: arr[] = {1,2,3}
Explanation: As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the topmost permutation.
*/
#include<bits/stdc++.h>
using namespace std;

void generateAllPermutation(int index, vector<int> arr, vector<vector<int>> ans){
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i = index; i < arr.size(); i++){
        swap(arr[index], arr[i]);
        generateAllPermutation(index+1, arr, ans);
        swap(arr[index], arr[i]);
    }
}

vector<int> nextPermutation(vector<int> arr, int n){
    // Approach-3 (Optimal) - Time Complexity: O(3N) and Space Complexity: O(1) - modifying the array
    int index = -1;

    // S1. find the break point 
    for(int i = n-2; i >= 0; i--){
        if(arr[i+1] > arr[i]){
            index = i;
            break;
        }
    }
    // edge case
    if(index == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    // S2. find the smallest number but greater than index
    for(int i = n-1; i > index; i--){
        if(arr[i] > arr[index]){
            swap(arr[i], arr[index]);
            break;
        }
    }
    // S3. reverse the remaining order
    reverse(arr.begin() + index + 1, arr.end());
    return arr;

    // Approach-2 (using built-in function - next_permutation()) - changes the original array to next permutated array
    /*
    next_permutation(arr.begin(), arr.end());
    return arr;
    */
    
    // Approach-1 - Brute
    /*
    1. Generate all possible permutations (recursion)
    2. do a linear search to find the input 
    3. print or return the next index to the input.

    // Time Complexity: O(N!*N) and Space Complexity: O(1)
    */
}

int main(){
    vector<int> arr = {1, 2};
    int n = arr.size();

    vector<int> ans = nextPermutation(arr, n);
    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;

    // generate all possible permutations
    /*
    vector<vector<int>> ans;
    generateAllPermutation(0, arr, ans);
    return ans;
    */
    
}