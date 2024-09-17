/*
Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

Example 1:
Input Format: N = 5, array[] = {1,2,4,5}
Result: 3
Explanation: In the given array, number 3 is missing. So, 3 is the answer.

Example 2:
Input Format: N = 3, array[] = {1,3}
Result: 2
Explanation: In the given array, number 2 is missing. So, 2 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int n){
    // Approach-2 (using xor properties) TC: O(N) and SC: O(1)
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i < n-1; i++){
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ n;

    int missing = xor1 ^ xor2;
    return missing;

    // Approach-1 (using sum formula) TC: O(N) and SC: O(1)
    /*
    int sum1 = n * (n+1)/2;
    int sum2 = 0;
    for(int i = 0; i < n-1; i++){
        sum2 += a[i];
    }

    int missing = sum1 - sum2;
    return missing;
    */
}

int main(){
    int n = 5;
    
    vector<int> a = {1, 2, 3, 5};

    int missing =  missingNumber(a, n);
    cout << "Missing number in list: " << missing << endl;
}