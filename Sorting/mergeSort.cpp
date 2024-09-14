#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // the right half is exhausted
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    // the left half is exhausted
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    // copying the elments into original array from temp[]
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low >= high) return;
    int mid = (low + high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
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

    mergeSort(arr, 0, size-1);

    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}