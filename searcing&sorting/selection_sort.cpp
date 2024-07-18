// #include<bits/stdc++.h>
// using namespace std;

// void selection_sort(vector<int> &arr) {
//     int n = arr.size();
//     for(int i = 0; i < n - 1; i++) {
//         int min_index = i;
//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] < arr[min_index]) {
//                 min_index = j;
//             }
//         }
//         swap(arr[min_index], arr[i]);
//     }
// }

// int main() {
//     vector<int> arr = {13, 46, 24, 52, 29, 9};
//     selection_sort(arr);

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}

int main() {
    int arr[] = {13, 46, 24, 52, 29, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
