#include <iostream>
#include <climits>

using namespace std;

pair<int, int> findLarge(int arr[][3]) {
    int maxSum = INT16_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }

        if (sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    return make_pair(maxSum, rowIndex);
}

int main() {
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    pair<int, int> result = findLarge(arr);
    int maxSum = result.first;
    int maxRowIndex = result.second;

    if (maxRowIndex != -1) {
        cout << "Max: " << maxSum << " at row index: " << maxRowIndex << endl;
    } else {
        cout << "empty" << endl;
    }

    return 0;
}
