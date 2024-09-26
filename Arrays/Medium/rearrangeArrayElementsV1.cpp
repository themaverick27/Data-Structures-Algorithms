/*
Variety-1
Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.

Example 1:
Input: arr[] = {1,2,-4,-5}, N = 4
Output: 1 -4 2 -5
Explanation:  Positive elements = 1,2 and Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

Example 2:
Input: arr[] = {1,2,-3,-1,-2, 3}, N = 6
Output: 1 -3 2 -1 3 -2
Explanation:  Positive elements = 1,2,3 and Negative elements = -3,-1,-2
To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3. Also, -3 should come before -1, and -1 should come before -2.
*/
#include<bits/stdc++.h>
using namespace std;

void rearrangeArrayElements(vector<int> arr, int n){
    // Approach-2 - Time Complexity: O(N) and Space Complexity: O(N) - for storing the answer (modified result)
    vector<int> ans(n,0);
    int posIndex = 0, negIndex = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
        else{
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    // printing the ans
    for(auto it: ans){
        cout << it << " ";
    }

    // Approach-1 (divide the array into two array with separate positive and negative term and then merge the array)
    // Time Complexity: O(N + N/2) and Space Complexity: O(N)
    /*
    vector<int> posTemp;
    vector<int> negTemp;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) posTemp.push_back(arr[i]);
        else negTemp.push_back(arr[i]);
    }

    for(int i = 0; i < n/2; i++){
        arr[2*i] = posTemp[i];
        arr[2*i + 1] = negTemp[i]; 
    }

    // printing the array
    for(auto it: arr){
        cout << it << " ";
    }
    */
}

int main(){
    vector<int> arr = {1, 2, 3, -1, -2, -3};
    int n = arr.size();

    rearrangeArrayElements(arr, n);    
}