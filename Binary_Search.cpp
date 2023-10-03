#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at the middle of the array
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }
    // If the target is not in the array, return -1
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
