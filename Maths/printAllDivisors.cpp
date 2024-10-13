#include<bits/stdc++.h>
using namespace std;

void printAllDivisors(int n){
    // Approach-2 (Mathematical Observation)
    // Time Complexity: O(sqrt(n))
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            cout << i << " ";
            if((n/i) != i) cout << (n/i) << " ";
        }
    }
    cout << endl;

    // Approach-1 (Time Complexity: O(n))
    /*
    cout << "Divisors are: ";
    for(int i = 1; i < n; i++){
        if(n % i == 0) cout << i << " ";
    }
    cout << endl;
    */
}

int main(){
    int n;
    cout << "Enter number n: ";
    cin >> n;

    printAllDivisors(n);
}