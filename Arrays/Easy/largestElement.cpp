/*
Problem Statement: Given an array, we have to find the largest element in the array.

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2:
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 
*/
#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int largest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest) largest = arr[i];
    }
    return largest;
}

int smallestElement(int arr[], int n){
    int smallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest) smallest = arr[i];
    }
    return smallest;
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

    int largest = largestElement(arr, size);
    cout << "Largest element in the array is: " << largest << endl;

    /*
    int smallest = smallestElement(arr, size);
    cout << "Smallest element in the array is: " << smallest << endl;
    */
}

// Time Complexity: O(N)
// Space Complexity: O(1)