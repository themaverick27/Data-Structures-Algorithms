/*
Variety-2
Problem Statement: There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. The leftover elements should be placed at the very end in the same order as in array A.

Note: Start the array with positive elements.

Example 1:
Input: arr[] = {1,2,-4,-5,3,4}, N = 6
Output: 1 -4 2 -5 3 4
Explanation: Positive elements = 1,2 and Negative elements = -4,-5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
Leftover positive elements are 3 and 4 which are then placed at the end of the array.

Example 2:
Input: arr[] = {1,2,-3,-1,-2,-3,}, N = 6
Output: 1 -3 2 -1 3 -2
Explanation: Positive elements = 1,2 and Negative elements = -3,-1,-2,-4
To maintain relative ordering, 1 must occur before 2. Also, -3 should come before -1, and -1 should come before -2.
After alternate ordering, -2 and -4 are left, which would be placed at the end of the ans array.
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArrayElements(vector<int> arr, int n){
    // Approach-1 (Brute)
    vector<int> posTerm;
    vector<int> negTerm;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) posTerm.push_back(arr[i]);
        else negTerm.push_back(arr[i]);
    } 

    int m1 = posTerm.size();
    int m2 = negTerm.size();

    // if no. of positives > no. of negatives
    if(m1 > m2){
        for(int i = 0; i < n/2; i++){
            arr[2*i] = posTerm[i];
            arr[2*i+1] = negTerm[i];
        }
        // remaining no. of positives
        int index = m2*2;
        for(int i = m2; i < m1; i++){
            arr[index] = posTerm[i];
            index++;
        }
    } else{
        for(int i = 0; i < n/2; i++){
            arr[2*i] = posTerm[i];
            arr[2*i+1] = negTerm[i];
        }
        // remaining no. of negatives
        int index = m1*2;
        for(int i = m1; i < m2; i++){
            arr[index] = negTerm[i];
            index++;
        }
    }   
    return arr;
}

int main(){
    vector<int> arr = {1,2,-3,-1,-2,-3,};
    int n = arr.size();

    vector<int> ans = rearrangeArrayElements(arr, n);

    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;
}
// Time Complexity: O(N + N/2)
// Space Complexity: O(N)