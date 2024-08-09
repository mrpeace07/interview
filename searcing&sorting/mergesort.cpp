#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h) {
    int i = l;
    int j = m + 1;
    int k = 0;  // index for the temporary array
    int b[h - l + 1];  // temporary array to store the merged result
    
    // Merge the two halves into b[]
    while (i <= m && j <= h) {
        if (arr[i] < arr[j]) {
            b[k++] = arr[i++];
        } else {
            b[k++] = arr[j++];
        }
    }
    // Copy the remaining elements of the left half, if any
    while (i <= m) {
        b[k++] = arr[i++];
    }
    // Copy the remaining elements of the right half, if any
    while (j <= h) {
        b[k++] = arr[j++];
    }
    
    // Copy the merged elements back into the original array
    for (i = l; i <= h; i++) {
        arr[i] = b[i - l];
    }
}

void ms(int arr[], int l, int h) {
    if (l < h) {
        int m = l + (h - l) / 2;
        
        // Sort the first half
        ms(arr, l, m);
        // Sort the second half
        ms(arr, m + 1, h);
        // Merge the sorted halves
        merge(arr, l, m, h);
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    ms(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
