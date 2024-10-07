/*
Problem Statement: Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

Example-1:
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.0

Example 2:
Input: num = 0
Output: 0
*/
#include<bits/stdc++.h>
using namespace std;

int addDigits(int n){
    // Recursive Approach
    int sum = 0;
    if(n >= 0 && n <= 9){
        return n;
    }

    while (n != 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return addDigits(sum);
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    int answer = addDigits(num);
    cout << "answer: " << answer << endl;
}
// Time complexity: O(log(n))
// Space complexity: O(log(n))