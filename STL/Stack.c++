#include<iostream>

#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("sahil");
    s.push("sharma");

    cout<<"top element"<<s.top()<<endl;

    s.pop();

    cout<<"top element"<<s.top()<<endl;

    return 0;
}

