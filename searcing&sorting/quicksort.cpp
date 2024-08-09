#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l + 1;
    int j = h;

    while (i <= j) {
        while (i <= h && arr[i] < pivot) i++;
        while (j >= l && arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[l], arr[j]);
    return j;
}

void qs(int arr[], int l, int h) {
    if (l < h) {
        int pi = partition(arr, l, h);
        qs(arr, l, pi - 1);
        qs(arr, pi + 1, h);
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    qs(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
