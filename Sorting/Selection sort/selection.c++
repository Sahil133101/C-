#include<iostream>
using namespace std;

void selection(int n, int arr[]) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        // Swap elements
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform selection sort
    selection(n, arr);

    // Print sorted array
    cout << "Sorted Array: ";
    printArray(n, arr);

    return 0;
}
