#include <iostream>
using namespace std;

void Move(int n, int arr[]) {

    int temp =0;
    for (int i = 0; i < n; i++) {
        

        if (arr[i] != 0) {
            swap(arr[i], arr[temp]);
            temp++;
        }
    }
}

void Array(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void PrintArray(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    Array(n, arr);

    Move(n, arr);

    cout << "Modified Array: ";
    PrintArray(n, arr);

    return 0;
}
