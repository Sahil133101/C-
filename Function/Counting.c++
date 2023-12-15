#include<iostream>
using namespace std;

int count(int n){
    for (int i=0; i<n; i++){
        cout<<i;
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;

    cout<<count(n);

    return 0;
}