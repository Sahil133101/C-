#include<iostream> 
using namespace std;

bool isPresent(int arr[][4], int target, int& row, int& col) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == target) {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

int main() {

    int arr[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl << " ";
    }

    cout << "Enter your target value: ";
    int target;
    cin >> target;

    int row, col;

    if (isPresent(arr, target, row, col)) {
        cout << "Element found at index (" << row << ", " << col << ")" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
