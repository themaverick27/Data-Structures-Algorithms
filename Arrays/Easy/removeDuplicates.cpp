/*
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.

Example 1:
Input: arr[1,1,2,2,2,3,3]
Output: arr[1,2,3,_,_,_,_]
Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

Example 2:
Input: arr[1,1,1,2,2,3,3,3,3,4,4]
Output: arr[1,2,3,4,_,_,_,_,_,_,_]
Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.
*/

#include<bits/stdc++.h>
using namespace std;

int uniqueElements(int arr[], int n){
    // Approach-2 (using Two Pointer) TC: O(N) and SC: O(1)
    int j = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1]){
            arr[j] = arr[i];
            j++;
        }
    }
    return j;

    // Approach-1 (using set data structure) TC: O(n*log(n))+O(n) and SC: O(n) 
    /*
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    int unique = st.size();

    int j = 0;
    for (int x: st) {
        arr[j++] = x;
    }

    return unique;
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

    int uniqueCount = uniqueElements(arr, size);
    cout << "Number of unique element: " << uniqueCount << endl;

    cout << "The array after removing duplicate elements is: ";
    for(int i = 0; i < uniqueCount; i++){
        cout << arr[i] << " ";
    }
}