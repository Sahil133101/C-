#include<iostream>
using namespace std;

int main() {
    
    cout << "Enter size of Array: ";
    int n;
    cin >> n;

    cout << "Enter the element of array: ";
    int arr[n];
    int k;
    cin >> k;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = k + 1;
    int end = n - 1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Array after reverse from (k+1)th term: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
