/*
Problem statement: You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. 
Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Note: Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Example 1:
Input: n = 5, m = 5, arr1[] = {1,2,3,4,5} , arr2[] = {2,3,4,4,5}
Output: {2,3,4,5}

Example 2:
Input: n = 10, m = 7, arr1[] = {1,2,3,4,5,6,7,8,9,10}, arr2[] = {2,3,4,4,5,11,12}
Output: {2,3,4,5}
*/

#include<bits/stdc++.h>
using namespace std;

void printAnswer(vector<int> ans){
    cout << "Intersection of two arrays: ";
    for(auto x: ans){
        cout << x << " ";
    }
    cout << endl;
}

void intersectionOfTwoSortedArrays(int a[], int m, int b[], int n){
    // Approach 2 - Two pointer
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < m && j < n){
        if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    printAnswer(ans);

    // Approach 1 - By keeping track of elements
    // Time Complexity: O(m*n) and Space Complexity: O(n2) - worst case
    /*
    int visited[n] = {0};
    vector<int> ans;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == b[j] && visited[j] == 0){
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if(b[j] > a[i]) break; // only for sorted array
        }
    }
    printAnswer(ans);
    */
}

int main(){

    int arr1[] = {1, 2, 3, 4, 5, 7, 7, 10};
    int m = 8;

    int arr2[] = {1, 2, 2, 3, 7, 7, 9};
    int n = 7;

    intersectionOfTwoSortedArrays(arr1, m, arr2, n);
}

// Time Complexity: O(min(m,n)) 
// Space Complexity: O(min(m,n)) - worst case