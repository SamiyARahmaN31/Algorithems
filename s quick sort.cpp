#include <bits/stdc++.h>
using namespace std;

void quicksort(int array[], int low, int high) {
    if (low < high) {
        int pivot = low;
        int i = low;
        int j = high;

        while (i < j) {
            // Find element greater than pivot
            while (i < high && array[i] <= array[pivot])
                i++;

            // Find element less than pivot
            while (array[j] > array[pivot])
                j--;

            if (i < j) {
                // Swap elements at i and j
                swap(array[i], array[j]);
            }
        }

        // Swap pivot with element at j
        swap(array[j], array[pivot]);

        // Recursively sort left and right subarrays
        quicksort(array, low, j - 1);
        quicksort(array, j + 1, high);
    }
}

void print_array(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int array[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> array[i];

    quicksort(array, 0, n - 1);

    cout << "Sorted array: ";
    print_array(array, n);

    return 0;
}


