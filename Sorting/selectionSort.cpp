#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int mini = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        swap(arr[i], arr[mini]);
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

    selectionSort(arr, size);

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}