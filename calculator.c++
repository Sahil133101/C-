#include<iostream>
using namespace std;

int main(){

    char op;
    float a;
    float b;

    cin>>op;
    cin >>a;
    cin>>b;

    switch(op)
    {
        case'+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;
    }
    return 0;

}