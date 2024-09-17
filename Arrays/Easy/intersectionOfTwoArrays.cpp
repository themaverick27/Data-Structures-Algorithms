#include<bits/stdc++.h>
using namespace std;

void printAnswer(vector<int> ans){
    cout << "Intersection of two arrays: ";
    for(auto x: ans){
        cout << x << " ";
    }
    cout << endl;
}

void intersectionOfTwoSortedArrays(int a[], int m, int b[], int n){
    // Approach - Two pointer
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < m && j < n){
        if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
        else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    printAnswer(ans);
}

int main(){

    int arr1[] = {1, 2, 3, 4, 5, 7, 7, 10};
    int m = 8;

    int arr2[] = {1, 2, 2, 3, 7, 7, 9};
    int n = 7;

    intersectionOfTwoSortedArrays(arr1, m, arr2, n);
}

// Time Complexity: O(min(m,n)) 
// Space Complexity: O(min(m,n)) - worst case