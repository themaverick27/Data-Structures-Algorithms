/*
Problem Statement: Given an integer N, check whether it is prime or not. 

Note: A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

Example-1:
Input:N = 2
Output:True
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

Example-2:
Input:N =10
Output: False
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.
*/
#include<bits/stdc++.h>
using namespace std;

bool checkForPrime(int n){
    // Approach-2 (using factors concept - factors can be found in sqrt(n))
    // Time Complexity: O(sqrt(n))
    int count = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            count++;
            if((n/i) != i) count++;
        }
    }
    if(count == 2) return true;
    return false;

    // Approach-1 Time Complexity: O(n)
    /*
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) count++;
    }

    if(count == 2) return true;
    return false;
    */
}

int main(){
    int n;
    cout << "Enter number n: ";
    cin >> n;

    if(checkForPrime(n)) cout << "Prime Number" << endl;
    else cout << "Not a Prime Number" << endl;
}