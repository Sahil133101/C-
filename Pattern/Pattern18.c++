#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int value= 'A';
    While(i<=n){
        int j=1;
        while(j<=i){
            cout<< value+i+j-2;
      j=j+1;
        }
        cout<endl;
        i=i+1;
    }
    return 0;

}