#include <iostream>

using namespace std;

int main() {
    int size;

    // Get the size of the arrays from the user
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int array1[size];
    int array2[size];
    int sum_array[size];

    // Input for Array 1
    cout << "Enter elements for Array 1: ";
    for (int i = 0; i < size; ++i) {
        cin >> array1[i];
    }

    // Input for Array 2
    cout << "Enter elements for Array 2: ";
    for (int i = 0; i < size; ++i) {
        cin >> array2[i];
    }

    // Sum the arrays element-wise
    for (int i = 0; i < size; ++i) {
        sum_array[i] = array1[i] + array2[i];
    }

    // Print the arrays and the sum array
    cout << "Array 1: ";
    for (int i = 0; i < size; ++i) {
        cout << array1[i] << " ";
    }

    cout << "\nArray 2: ";
    for (int i = 0; i < size; ++i) {
        cout << array2[i] << " ";
    }

    cout << "\nSum Array: ";
    for (int i = 0; i < size; ++i) {
        cout << sum_array[i] << " ";
    }

    cout << endl;

    return 0;
}
