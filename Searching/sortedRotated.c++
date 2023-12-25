#include<iostream>
using namespace std;

int getPivot(int n, int arr[]) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = (start + end) / 2;

        if (arr[mid] <= arr[n - 1]) {
            end = mid;
        } else {
            start = mid + 1;
        }
    }

    return start;
}

int binarySearch(int arr[], int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int searchInRotatedArray(int n, int arr[], int key) {
    int pivot = getPivot(n, arr);

    if (key >= arr[pivot] && key <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, key);
    } else {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

void inputArray(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int key;

    inputArray(n, arr);

    cin >> key;

    cout << searchInRotatedArray(n, arr, key);

    return 0;
}
