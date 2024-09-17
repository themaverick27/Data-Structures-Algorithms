/*
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest: 2 Second Largest: 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2.

Example 2:
Input: [1]
Output: Second Smallest: -1 Second Largest: -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/

#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n){
    if(n < 2) return -1;

    // Approach-2 TC: O(N) and SC: O(1)
    int largest = INT_MIN;
    int slargest = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest && arr[i] != largest) slargest = arr[i];
    }
    return slargest;

    // Approach-1 (using sorting and traversing) TC: O(N*log(N))+O(N) and SC: O(1)
    /*
    sort(arr, arr+n);

    int largest = arr[n-1];
    int slargest = INT_MIN;
    for(int i = n-2; i >= 0; i--){
        if(arr[i] != largest){
            slargest = arr[i];
            return slargest;
        }
    }
    return -1;
    */
}

int secondSmallestElement(int arr[], int n){
    if(n < 2) return -1;

    // Approach-2 TC: O(N) and SC: O(1)
    int smallest = INT_MAX;
    int sSmallest = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < sSmallest && arr[i] != smallest) sSmallest = arr[i];
    }
    return sSmallest;

    // Approach-1 (using sorting and traversing) TC: O(N*log(N))+O(N) and SC: O(1)
    /*
    sort(arr, arr+n);

    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i = 1; i < n; i++){
        if(arr[i] != smallest){
            sSmallest = arr[i];
            return sSmallest;
        }
    }
    return -1;
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

    int secondLargest = secondLargestElement(arr, size);
    cout << "Second largest element in the array: " << secondLargest << endl;
    
    int secondSmallest = secondSmallestElement(arr, size);
    cout << "Second smallest element in the array: " << secondSmallest << endl;
    
}