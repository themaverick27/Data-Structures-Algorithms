/*
Problem Statement: Given an integer x, return true if x is a palindrome, and false otherwise.

Example-1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    // Approach-2: (Reversing half of the number)
    if(x < 0 || (x != 0 && x%10 == 0)) return false;

    int temp = x;
    int rev = 0;
    while(x > rev){
        int digit = x % 10;
        rev = (rev * 10) + digit;
        x /= 10;
    }

    if(x == rev || x == rev/10) return true;
    return false;

    // Approach-1: (Reverse the number and then compare) 
    // Time Complexity: O(log10(x)) and Space Complexity: O(1)
    /*
    if(x < 0) return false;

    long long temp = x;
    long long rev = 0;

    while(x != 0){
        int digit = x % 10;
        rev = (rev*10) + digit;
        x /= 10;
    }

    if(temp == rev) return true;
    return false;
    */
}

int main(){
    int x;
    cout << "Enter number: ";
    cin >> x;

    if(isPalindrome(x)) cout << "Palindrome Number (true)" << endl;
    else cout << "Not a Palindrome number (false)" << endl;
}