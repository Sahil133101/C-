#include<iostream>
using namespace std;

// Function to swap values in the matrix
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to rotate a matrix by 90 degrees
void rotateMatrix(int arr[][100], int &n, int &m) {
    // Transpose the matrix
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < m; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row of the transposed matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0, k = m - 1; j < k; j++, k--) {
            swap(arr[i][j], arr[i][k]);
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int arr[100][100];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Rotate the matrix
    rotateMatrix(arr, n, m);

    // Print the rotated matrix
    cout << "\nMatrix after rotating 90 degrees:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
