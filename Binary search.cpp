#include <bits/stdc++.h>
using namespace std;

int main() {
    int index = -1; // Variable to store the index of the found value
    int arr[] = {2, 3, 4, 6, 8, 11}; // Array of sorted integers
    int value = 11; // Value to be searched
    int low = 0; // Initial lower bound of the search
    int high = sizeof(arr)/sizeof(arr[0]) - 1; // Initial upper bound of the search

    // Binary search loop
    while (low <= high) {
        int mid = (low + high) / 2; // Calculate the middle index

        if (arr[mid] == value) { // Check if the value is found at mid
            index = mid;
            break; // Exit the loop once the value is found
        }
        else if (arr[mid] < value) { // If the mid value is less than the search value
            low = mid + 1; // Adjust the lower bound to search the right half
        }
        else { // If the mid value is greater than the search value
            high = mid - 1; // Adjust the upper bound to search the left half
        }
    }

    // Output the result
    if (index != -1) {
        cout << "Value found at index: " << index << endl; // If value is found
    }
    else {
        cout << "Value not found in the array" << endl; // If value is not found
    }

    return 0;
}
