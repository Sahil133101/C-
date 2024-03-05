#include<iostream>
using namespace std;

bool checkpalindrome(string str, int i, int j) {
    // base case
    if(i >= j) {
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }
    else {
        return checkpalindrome(str, i + 1, j - 1);
    }
}

int main() {
    string str = "NAMAN";

    bool isPalindrome = checkpalindrome(str, 0, str.length() - 1);
    if(isPalindrome) {
        cout << "It's a palindrome";
    }
    else {
        cout << "It's not a palindrome";
    }
    cout << endl;

    return 0; 
}
