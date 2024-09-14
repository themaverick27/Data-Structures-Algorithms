#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high-1) i++;
        while(arr[j] > pivot && j >= low+1) j--;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int partitionIndex = partition(arr, low, high);

        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
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

    quickSort(arr, 0, size-1);

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}