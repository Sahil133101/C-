#include<iostream>
using namespace std;

void Merge(int n1, int arr1[], int n2, int arr2[], int merge[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merge[k] = arr1[i];
            k++;
            i++;
        } else {
            merge[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n1) {
        merge[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n2) {
        merge[k] = arr2[j];
        k++;
        j++;
    }
}

void Array(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void PrintArray(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n1;
    cin >> n1;

    int arr1[n1];
    Array(n1, arr1);

    int n2;
    cin >> n2;

    int arr2[n2];
    Array(n2, arr2);

    // Create an array to store the merged result
    int merge[n1 + n2];

    Merge(n1, arr1, n2, arr2, merge);

    cout << "Merged Array: ";
    PrintArray(n1 + n2, merge);

    return 0;
}
