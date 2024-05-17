#include<iostream>
using namespace std;

bool rev(string &str, int i) {

    int n = str.length();
    int j = str.length()-i-1;

    cout<<str<<endl;
    //base case
    if (i >= j) {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    rev(str, i, j);
}

int main() {
    string name = "sahil";
    bool isRev = rev(name, 0, name.length() - 1);
    if(isRev){
        cout<< rev;
    }
    else{
        cout<<"NOt";
    }
    cout<<endl;
    cout << name;
    return 0;
}
