/*
Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order.

Example 1:
Input: n = 5, m = 5, arr1[] = {1,2,3,4,5} , arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: 
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5} 

Example 2:
Input: n = 10, m = 7, arr1[] = {1,2,3,4,5,6,7,8,9,10}, arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation:
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12} 
*/

#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> ans){
    cout << "Union of two arrays: ";
    for(auto x: ans){
        cout << x << " ";
    }
    cout << endl;
}

void unionOfTwoSortedArrays(int a[], int m, int b[], int n){
    // Approach - Two pointer (TC: O(m+n) and SC: O(m+n) - If Space of Union (Ans) ArrayList is considered}) 
    int i = 0;
    int j = 0;
    vector<int> ans;
    
    while(i < m && j < n){
        if(a[i] <= b[j]){
            if(ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        } else{
            if(ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    // if array b[] is exhausted
    while(i < m){
        if(ans.back() != a[i]){
            ans.push_back(a[i]);
            i++;
        }
    }
    // if array a[] is exhausted
    while(j < n){
        if(ans.back() != b[j]){
            ans.push_back(b[j]);
            j++;
        }
    }

    printArray(ans);
}


void unionOfTwoArrays(int a[], int m, int b[], int n){
    // Approach-1 using set (TC: O((m+n)log(m+n) and SC: O(m+n) {If Space of Union ArrayList is considered})
    set < int > s;
    vector < int > ans;
    for(int i = 0; i < n; i++)
        s.insert(a[i]);
    for(int i = 0; i < m; i++)
        s.insert(b[i]);
    for (auto & it: s)
        ans.push_back(it);
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5, 7, 7, 10};
    int m = 8;

    int arr2[] = {1, 2, 2, 3, 7, 7, 9};
    int n = 7;

    // unionOfTwoSortedArrays(arr1, m, arr2, n);

    unionOfTwoArrays(arr1, m, arr2, n);
}