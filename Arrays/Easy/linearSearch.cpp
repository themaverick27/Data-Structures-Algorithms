#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter key element to search: ";
    cin >> key;
    
    int index = linearSearch(arr, size, key);
    if(index == -1) cout << "Key element doesn't exists in the arrray." << endl;
    else cout << "Key element is present at index: " << index << endl;
}

// Time Complexity: O(N)
// Space Complexity: O(1)