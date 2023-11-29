#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        if(n%i==0){
            cout<<"notprime"<<i<<endl;
        }
        else{
            cout<<"prime"<<i<<endl;
        }
        i=i+1;
    }
    return 0;
}