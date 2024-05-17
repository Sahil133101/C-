#include<iostream>
using namespace std;

bool checkpalindrome(string str, int i) {
    // base case

    int n  = str.length();
    int j = str.length()-i-1;
    if(i >=j) {
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }
    else {
        return checkpalindrome(str, i + 1);
    }
}

int main() {

    string str;
    cin>>str;

    bool isPalindrome = checkpalindrome(str, 0);
    if(isPalindrome) {
        cout << "It's a palindrome";
    }
    else {
        cout << "It's not a palindrome";
    }
    cout << endl;

    return 0; 
}
