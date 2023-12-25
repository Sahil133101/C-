#include<iostream>
using namespace std;

bool isPossible(int n, int arr[], int Painter, int board, int mid) {
    int PainterCount = 1;
    int boardCount = 0;

    for (int i = 0; i < n; i++) {
        if (boardCount + arr[i] <= mid) {
            boardCount += arr[i];
        } else {
            PainterCount++;
            if (PainterCount > Painter || arr[i] > mid) {
                return false;
            }
            boardCount = arr[i];
        }
    }
    return true;
}

int allocateBoard(int n, int arr[], int Painter, int board) {
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (isPossible(n, arr, Painter, board, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "Minimum time to color all the boards: " << ans << endl;
    return ans;
}

void inputArray(int n, int arr[]) {
    cout << "Enter the sizes of the boards: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the number of boards to paint: ";
    cin >> n;

    int arr[n];
    inputArray(n, arr);

    int Painter;
    cout << "Enter the number of painters: ";
    cin >> Painter;

    int board;
    cout << "Enter the size of the boards: ";
    cin >> board;

    cout << allocateBoard(n, arr, Painter, board);

    return 0;
}
