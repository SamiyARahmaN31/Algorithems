#include <bits/stdc++.h>
using namespace std;

void selectionSort(int array[], int n) {
    int i, j, min;
    for (i = 0; i < n; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min])
                min = j;
        }
        swap(array[i], array[min]);
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

    selectionSort(array, n);

    cout << "Sorted array: ";
    print_array(array, n);

    return 0;
}

