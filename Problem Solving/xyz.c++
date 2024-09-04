#include<iostream>
using namespace std;

bool check(int n, int arr[]) {
    int m = n - 1;
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[m - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if(check(n, arr)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}
