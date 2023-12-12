#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isprime = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << "not prime";
            isprime = false;
            break;
        }
    }

    if (isprime == false) {
        cout << " not prime";
    } else {
        cout << " prime";
    }

    return 0;
}
