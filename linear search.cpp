#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    int i = 0;  // Initialize index to 0

    // Use a while loop to iterate through the array
    while (i < size) {
        // If the current element matches the target, return the index
        if (arr[i] == target) {
            return i;
        }
        i++;  // Increment the index to move to the next element
    }
    return -1;  // If the target is not found, return -1
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};  // Sample array
    int target = 70;  // Target element to search for
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Call linear search function
    int result = linearSearch(arr, size, target);

    // Output result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

