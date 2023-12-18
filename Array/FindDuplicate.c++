#include<iostream>
using namespace std;

bool isUnique(int n, int arr[]) {
    bool unique = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                unique = false;
                cout << "Non-unique element: " << arr[i] << endl;
            }
        }
    }
    return unique;
}

void initializeArray(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    initializeArray(n, arr);

    if (isUnique(n, arr)) {
        cout << "All elements are unique";
    } else {
        //cout << "Non-unique element: " << arr[i] << endl;
    }

    return 0;
}
