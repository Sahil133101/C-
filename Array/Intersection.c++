#include<iostream>
using namespace std;

void inputArray(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void findIntersection(int n1, int arr1[], int n2, int arr2[]) {
    cout << "Intersection of the arrays: ";
    
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;  // Break the inner loop once a match is found
            }
        }
    }

    cout << endl;
}

int main() {
    int n1;
    cout << "Enter the size of the first array: ";
    cin >> n1;

    int arr1[n1];
    cout << "Enter elements of the first array: ";
    inputArray(n1, arr1);

    int n2;
    cout << "Enter the size of the second array: ";
    cin >> n2;

    int arr2[n2];
    cout << "Enter elements of the second array: ";
    inputArray(n2, arr2);

    findIntersection(n1, arr1, n2, arr2);

    return 0;
}
