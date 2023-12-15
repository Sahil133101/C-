#include<iostream>
using namespace std;

bool isEven(int num){
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}


int main(){

    int number;
    cin>>number;

    if(isEven(number)){
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }

    return 0;
}