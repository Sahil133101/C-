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
    int ans = -1;

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
    int even[5] = {1, 2, 3,3, 5};
    cout << "First Occurrence: " << FirstOcc(even, 5, 3) << endl;
    cout << "Last Occurrence: " << LastOcc(even, 5, 3) << endl;

    int  total (LastOcc - FirstOcc)+ 1;

    cout<<total ;

    return 0;
}
