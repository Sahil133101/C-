#include<iostream>
using namespace std;

int main(){
    int num =5;

    int *i =&num ;

    cout<<"before increment"<<*i<<endl;


    (*i)++;

    cout<<"after increment"<<*i<<endl;
    return 0;
}