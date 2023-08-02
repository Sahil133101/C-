#include <iostream>
using namespace std;


void generateFibonacciSeries(int n) {
    int first = 0, second = 1, next;
    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;
    
    generateFibonacciSeries(n);

    return 0;
}
