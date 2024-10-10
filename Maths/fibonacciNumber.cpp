/*
Problem Statement: The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Example-1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Example-2:
Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

Example-3:
Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

Constraints: 0 <= n <= 30
*/
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    // Approach-2 (Recursive)
    // Time complexity: O(2^n) and Space complexity: O(n)
    if(n <= 1) return n;

    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;

    
    // Approach-1 (Iteration)
    // Time Complexity: O(n) and Space Complexity: O(1)
    /*
    if(n == 0) return 0;
    if(n == 1) return 1;

    int a = 0, b = 1;
    int temp = 0;
    for(int i = 1; i <= n; i++){
        if(n == i) return temp;

        temp = a + b;
        a = b;
        b = temp;
    }
    return -1;
    */
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    int answer = fibonacci(n);
    cout << answer << endl;
}   