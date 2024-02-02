#include<iostream>
using namespace std;

int main(){

    

    int j=5;
 
    int *p =&j;

    int *q = p;

    cout<<p<<"_"<<q<<endl;
     cout<<*p<<"_"<<*q<<endl;

    return 0;
}