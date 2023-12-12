#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int b;
    cin>>b;

    for(int i=1; i<=n; i++){
        int nxtfab =a+b;
        cout<<nxtfab;
        a=b;
        b=nxtfab;
    }
    return 0;
}