#include<iostream>
using namespace std;

int FirstOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int LastOcc(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans ;

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main() {
    int even[9] = {1, 2,5,5,5,5,5,7,9};
    cout << "First Occurrence: " << FirstOcc(even, 9, 5) << endl;
    cout << "Last Occurrence: " << LastOcc(even, 9, 5) << endl;

    return 0;
}
