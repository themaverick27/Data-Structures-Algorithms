/*
Problem Statement: Given a number n. Count the number of digits in n which evenly divide n. 
Return an integer, total number of digits of n which divides n evenly.

Note :- Evenly divides means whether n is divisible by a digit i.e. leaves a remainder 0 when divided.

Example-1:
Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.

Example-2:
Input: n = 2446
Output: 1
Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

Example-3:
Input: n = 23
Output: 0
Explanation: 2 and 3, none of them divide 23 evenly.
*/
#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int n){
    int dup = n;
    int count = 0;
    while(n != 0){
        int last_digit = n % 10;
        // last_digit != 0 is the catch condition
        if((last_digit != 0) && (dup % last_digit == 0)) count++;
        n /= 10;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter number n: ";
    cin >> n;

    int ans = evenlyDivides(n);
    cout << "number of digits in n which evenly divide n: " << ans << endl;
}
// Time Complexity: O(log10(n))
// Space Complexity: O(1)