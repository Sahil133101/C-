#include <iostream>
using namespace std;

void subarraySum(int n, int arr[], int target) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == target) {
                cout << "Subarray found from index " << i << " to " << j << endl;
                return;
            }
        }
    }
    cout << "No subarray found with the given target sum." << endl;
}

void Array(int n, int arr[]) {
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    Array(n, arr);

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    subarraySum(n, arr, target);

    return 0;
}
