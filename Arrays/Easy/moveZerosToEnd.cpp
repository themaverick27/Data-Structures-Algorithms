/*
Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

Example 1:
Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Example 2:
Input: 1, 2, 0, 1, 0, 4, 0
Output: 1, 2, 1, 4, 0, 0, 0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
*/
#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int n){
    // Approach-1 (Two pointer)
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    moveZerosToEnd(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

// Time Complexity: O(N)
// Space Complexity: O(1)