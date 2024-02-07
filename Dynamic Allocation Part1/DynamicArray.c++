#include<iostream>
using namespace std;

int main(){


int ch = 'e';

cout<< sizeof(ch)<<endl;

int *c = &ch; // first method

cout<<sizeof(c)<<endl;

int *b = new int ;

cout<<sizeof(b);

delete b;
delete c;


    return 0;
}