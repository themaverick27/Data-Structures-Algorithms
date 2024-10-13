/*
Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

Note: An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example-1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153

Example 2:
Input:N = 371
Output: True
Explanation: 3^3+5^3+1^3 = 27 + 343 + 1 = 371
*/
#include<bits/stdc++.h>
using namespace std;
bool isArmstrongNumber(int n){
    int copy = n;
    int temp = 0;

    int total_digits = (int) (log10(n)) + 1;
    while(n != 0){
        int digit = n % 10;
        temp = temp + pow(digit, total_digits);
        n /= 10;
    }
    if(copy == temp) return true;
    return false;
}

int main(){
    int n;
    cout << "Enter number n: ";
    cin >> n;

    if(isArmstrongNumber(n)) cout << "Armstrong Number" << endl;
    else cout << "Not an Armstrong Number" << endl;
}
// Time Complexity: O(log10(n))
// Space Complexity: O(1)