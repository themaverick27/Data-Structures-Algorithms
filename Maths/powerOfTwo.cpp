/*
Problem Statement: Given an integer n, return true if it is a power of two. Otherwise, return false.

Note: An integer n is a power of two, if there exists an integer x such that n == 2^x.

Example-1:
Input: n = 1
Output: true
Explanation: 2^0 = 1

Example-2:
Input: n = 16
Output: true
Explanation: 2^4 = 16

Example-3:
Input: n = 3
Output: false

Constraints: -2^31 <= n <= 2^31 - 1
 
Follow up: Could you solve it without loops/recursion?
*/
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    // Approach-1 (Counting number of set bits)
    // Time Complexity: O(log(n)) and Space Complexity: O(1)
    if(n <= 0) return false;
    int count = 0;

    while(n != 0){
        count += n & 1;
        n = n >> 1;
    }
    if(count == 1) return true;
    return false;

    // Approach-2 (using built-in pow() fn)
    // Time Complexity: O(1) and Space Complexity: O(1)
    /*
    for(int i =0;i<31;i++){
        int ans = pow(2,i);
        if(ans == n)return true;
    }
    return false;
    */

    // Approach-3 (AND Operator - And operation between multiple of 2 and next lower number will always give 0 and other wise it will never be 0)
    // Time Complexity: O(1) and Space Complexity: O(1)
    // return  (n>0 && (n & (n-1))==0) ? true:false;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    isPowerOfTwo(n);
}