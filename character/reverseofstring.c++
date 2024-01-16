#include<iostream>
using namespace std;

void rev(char name[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int length(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    const int max_length = 10;
    char name[max_length];

    cout << "Enter a string (up to 10 characters): ";
    cin >> name;

    int len = length(name);

    // Reverse the string
    rev(name, len);

    // Print the reversed string
    cout << "Reversed string: " << name << endl;

    return 0;
}
