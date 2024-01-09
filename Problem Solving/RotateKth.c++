#include<iostream>
using namespace std;

void initial(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void rotate(int n, int arr[], int k) {
    k = k % n;
    for (int i = 0; i < n; i++) {
        cout << arr[(i + k) % n] << " ";
    }
}

void print(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    int k;
    cin >> k;

    initial(n, arr);
    rotate(n, arr, k);

    return 0;
}
