#include<iostream>
using namespace std;

void leftRotate(int arr[], int n, int k) {
    // Normalize the rotation value
    k = k % n;

    // Reverse the entire array
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    // Reverse the first part of the array (from 0 to n-k-1)
    for (int i = 0; i < (n - k) / 2; i++) {
        swap(arr[i], arr[n - k - i - 1]);
    }

    // Reverse the second part of the array (from n-k to n-1)
    for (int i = 0; i < k / 2; i++) {
        swap(arr[n - k + i], arr[n - i - 1]);
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;

    leftRotate(arr, n, k);

    return 0;
}
