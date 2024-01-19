#include<iostream>
using namespace std;

void Findsum(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    Findsum(arr);

    return 0;
}
