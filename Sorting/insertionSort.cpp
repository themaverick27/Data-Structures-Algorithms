#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j-1] > arr[j]) swap(arr[j-1], arr[j]);
        }
    }
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

    insertionSort(arr, size);

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}