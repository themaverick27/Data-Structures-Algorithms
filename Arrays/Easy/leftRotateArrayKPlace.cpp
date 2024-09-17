/*
Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to left by 3 position.
*/

#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateByKPlace(int arr[], int n, int k){
    // Approach-2
    k = k % n;

    rev(arr, 0, k-1);
    rev(arr, k, n-1);
    rev(arr, 0, n-1);

    /*
    // Approach-1 (using temp array) TC: O(n+k) and SC: O(k)
    k = k % n;

    int temp[k];
    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }

    for(int i = n-k; i < n; i++){
        arr[i] = temp[i+k-n];
    }
    */
}

void rightRotateByKPlace(int arr[], int n, int k){
    // Approach-2
    k = k % n;

    rev(arr, 0, k);
    rev(arr, k+1, n-1);
    rev(arr, 0, n-1);
    

    // Approach-1 (using temp array) TC: O(n+k) and SC: O(k)
    /*
    k = k % n;

    int temp[k];
    for(int i = n-k; i < n; i++){
        temp[i+k-n] = arr[i];
    }

    for(int i = k; i >= 0; i--){
        arr[i+k] = arr[i];
    }

    for(int i = 0; i < k; i++){
        arr[i] = temp[i];
    }
    */
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

    int k;
    cout << "Enter the rotation value k: ";
    cin >> k;

    // leftRotateByKPlace(arr, size, k);

    rightRotateByKPlace(arr, size, k);

    // printing the array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
 