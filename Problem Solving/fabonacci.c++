// #include <iostream>
// using namespace std;

// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm = 0;

//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

//     for (int i = 1; i <= n - 2; ++i) {
//         nextTerm = t1 + t2;
//         cout << nextTerm << ", ";
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
bool check(int n, int arr[]){
    int m =  n-1;
for(int i = 0; i < n/2; ++i){
    if(arr[i] =!arr[m-i]){
        return false;
    

}

}
return true;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }

      if(check(n, arr)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }
    return 0;
}