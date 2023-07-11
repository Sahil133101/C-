#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    int i=1;

    while(i<=10){

        int result = n*i;
        cout << n<<"*"<<i<<"="<<result<<endl;
        i++;
    }
    return 0;
}