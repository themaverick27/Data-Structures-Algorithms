/*
Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;

int singleElement(int arr[], int n){
    // Approach-1 (using xor gate) TC: O(N) and SC: O(1)
    int single = 0;
    for(int i = 0; i < n; i++){
        single ^= arr[i];
    }
    return single;
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

    int single = singleElement(arr, size);
    cout << "Single element in the array: " << single << endl;
}