#include<iostream>
using namespace std;

int BinarySearch(int n, int arr[], int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

void Array(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n1;
    cin >> n1;

    int arr1[n1];
    Array(n1, arr1);

    int n2;
    cin >> n2;

    int arr2[n2];
    Array(n2, arr2);

    int key;
    cin >> key;

    int index1 = BinarySearch(n1, arr1, key);
    int index2 = BinarySearch(n2, arr2, key);

    if (index1 != -1) {
        cout << "Found at index " << index1 << " in the first array" << endl;
    } else if (index2 != -1) {
        cout << "Found at index " << index2 << " in the second array" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}

