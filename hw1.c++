#include<iostream>
using namespace std;

int main(){
    char b;
    cin>>b;
   if(b >='a' && b <='z') {
    cout<<"lowercase"<<endl;
   }
   else if (b >='A' && b <= 'Z') {
    cout<<"Upper case"<<endl;
   }
   else {
    cout<<"number";
   }

    return 0;
} 



