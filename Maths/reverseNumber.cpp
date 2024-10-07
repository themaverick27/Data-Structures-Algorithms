/*
Problem Statement: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Note: Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example-1
Input Format: x = 123
Result: 321

Example-2:
Input Format: x = -123
Result: -321

Example-3:
Input Format: x = 120
Result: 21
*/

#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int num){
    int rev = 0;
    while(num != 0){
        int digit = num % 10;
        // check for overflow/underflow before updating the rev
        if((rev > INT_MAX/10) || (rev < INT_MIN/10)) return 0;
        rev = (rev * 10) + digit;
        num /= 10;
    }
    return rev;
}

int main(){
    int x;
    cout << "Enter the number: ";
    cin >> x;

    int answer = reverseNumber(x);
    cout << "Reverse Number: " << answer << endl;
}

// Time Complexity: O(log10(x))
// Space Complexity: O(1)