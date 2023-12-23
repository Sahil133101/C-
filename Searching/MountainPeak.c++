#include<iostream>
using namespace std;

int peekIndex(int n, int arr[]) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return start;
}

void Array(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    Array(n, arr);

    int peak = peekIndex(n, arr);
    cout << "Peak Index: " << peak << endl;

    return 0;
}
