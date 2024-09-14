#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = n-1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void optimisedBubbleSort(int arr[], int n){
    for(int i = n-1; i >= 1; i--){
        int didSwap = 0;
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            } 
        }
        if(didSwap == 0) break;
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

    bubbleSort(arr, size);
    // optimisedBubbleSort(arr, size);

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}