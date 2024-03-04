#include<iostream>
using namespace std;

void rev(string &str, int i, int j) {
    if(i >= j) {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    //recursive call
    
    rev(str, i, j);
}

int main() {
    string name = "sahil";
    rev(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}
