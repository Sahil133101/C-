#include<iostream>
using namespace std ;

void print(int *v){
    cout<< *v <<endl;
}


int main(){


    int value =5;

    int *v = &value;

    print(v);

    return 0;
}