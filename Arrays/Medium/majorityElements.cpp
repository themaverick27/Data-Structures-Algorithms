/*
Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times 
in the given array. You may consider that such an element always exists in the array.

Example 1:
Input: N = 3, nums[] = {3,2,3}
Output: 3
Explanation: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

Example 2:
Input: N = 7, nums[] = {2,2,1,1,1,2,2}
Output: 2
Explanation: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.

Example 3:
Input: N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}
Explanation: After counting the number of times each element appears and comparing it with half of array size, we get 4 as result.
Output: 4
*/
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr){
    // Approach-3 (Moore's Voting Algorithm) - Time Complexity: O(N) and Space Complexity: O(1)
    int n = arr.size();
    int count = 0;
    int ele;
    for(int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            ele = arr[i];
        }
        else if(arr[i] == ele) count++;
        else count--;
    }
    return ele;


    // Approach-2 (Hashing/Hashmap) - Time Complexity: O(N*logN) + O(N) and Space Complexity: O(N)
    /*
    int n = arr.size();
    map<int, int> mpp;

    //storing the elements with its occurnce
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        if(it.second > (n/2)) return it.first;
    }

    return -1;
    */

    // Approach-1 - Time Complexity: O(N*N) and Space Complexity: O(1)
    /*
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]) count++;
        }
        if(count > (n/2)) return arr[i];
    }
    return -1;
    */

}

int main(){
    vector<int> arr = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};

    int majority = majorityElement(arr);
    cout << "The majority element is: " << majority << endl;
}