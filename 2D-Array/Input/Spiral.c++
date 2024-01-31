#include<iostream>
using namespace std;

void Spiral(int arr[][100], int n, int m) {
    int top = 0;
    int right = m - 1;
    int left = 0;
    int down = n - 1;

    while (top <= down && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= down; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Print bottom row
        if (top <= down) {
            for (int i = right; i >= left; i--) {
                cout << arr[down][i] << " ";
            }
            down--;
        }

        // Print left column
        if (left <= right) {
            for (int i = down; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
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

    cout << "Spiral Order: ";
    Spiral(arr, n, m);

    return 0;
}
