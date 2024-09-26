/*
Problem Statement: Given an array, print all the elements which are leaders. 

Note: A Leader is an element that is greater than all of the elements on its right side in the array.

Example 1:
Input: arr = [4, 7, 1, 0]
Output: 7 1 0
Explanation: Rightmost element is always a leader. 7 and 1 are greater than the elements in their right side.

Example 2:
Input: arr = [10, 22, 12, 3, 0, 6]
Output: 22 12 6
Explanation: 6 is a leader. In addition to that, 12 is greater than all the elements in its right side (3, 0, 6), also 22 is greater than 12, 3, 0, 6.
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> arrayLeaders(vector<int> arr, int n){
    // Approach-2 - Time Complexity: O(N) and Space Complexity: O(N) - to store/ return the answer, otherwise SC: O(1)
    vector<int> ans;
    ans.push_back(arr[n-1]);

    int max = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    

    // Approach-1 (Picking an element and comparing it to the right side to each one)
    // Time Complexity: O(N*N) and Space Complexity: O(N) - for storing the leaders (ans)
    /*
    vector<int> ans;
    for(int i = 0; i < n; i++){
        int ele = arr[i];
        bool leader = true;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
        if(leader) ans.push_back(arr[i]);
    }
    return ans;
    */
}

int main(){
    vector<int> arr = {4, 7, 1, 0};
    int n = arr.size();

    vector<int> ans = arrayLeaders(arr, n);
}