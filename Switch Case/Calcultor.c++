#include<iostream>
using namespace std;

int  main(){

    int a ;
    cout<<"enter your first no"<<endl;
    cin>>a;

    int b ; 
    cout<<"enter your second number "<<endl;
    cin>>b;

    char Op;

    cout<<"enter your operation";

    cin>> Op;

    switch (Op){
        case  '+':
        cout<<(a+b)<<endl;
        break;

        case '-':
        cout<<(a-b)<<endl;
        break;

case '*':
cout<<(a*b)<<endl;
break;

case '/':
cout<<(a/b)<<endl;
break;
    }

    
    return 0;
}