#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int y=0;
        int space = n-y;
        while(space){
            cout<< " ";
            space =space+1;
        }
        while(j<=1){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        y=y+1;
        i=i+1;
    }
    return 0;
}