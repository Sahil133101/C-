#include<iostream>
using namespace std;

void insertion(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j;

        // Use a for loop instead of a while loop
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = temp;
    }
}

void Output(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void input(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    input(n, arr);
    
    insertion(n, arr);

    cout << "Sorted array: ";
    Output(n, arr);

    return 0;
}
