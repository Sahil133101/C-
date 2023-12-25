#include<iostream>
using namespace std;

bool isPossible(int n, int arr[], int Student, int book, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > Student || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBook(int n, int arr[], int Student, int book) {
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (isPossible(n, arr, Student, book, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << "Minimum number of pages allocated: " << ans << endl;
    return ans;
}

void inputArray(int n, int arr[]) {
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];
    inputArray(n, arr);

    int Student;
    cout << "Enter the number of students: ";
    cin >> Student;

    int book;
    cout << "Enter the number of books: ";
    cin >> book;

    allocateBook(n, arr, Student, book);

    return 0;
}
