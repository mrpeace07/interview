#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false; // Reset swapped for each pass (optimised code)
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break; // If no elements were swapped, array is sorted
    }
}

int main()
{
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    bubblesort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
