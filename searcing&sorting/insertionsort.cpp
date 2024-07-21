#include<bits/stdc++.h>
using namespace std;

// void insertionsort(vector<int>& arr){ brute
// int n = arr.size();
// for(int i=0; i<n-1; i++){
//     for(int j=i; j<n; j++){
//         while(j>0 && arr[j-1] > arr[j]){
//             swap(arr[j-1], arr[j]);
//             j--;
//         }
//     }
// }
// }

void insertionsort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int main(){
    vector<int> arr = { 14,9, 15, 12, 6, 8, 13};
    insertionsort(arr);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}
