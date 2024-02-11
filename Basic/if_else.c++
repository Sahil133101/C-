#include<iostream>
using namespace std ;

// int main(){

//     int n;
//     cin>>n;
//     cout<<"value of n:"<<n<<endl;
//     if(n>10){
//     cout<<"hello";
//     }
//     else {
//         cout<<"hii";
//     }
//     return 0;  
// }

int main(){
    int a=2;
    int b=a+1;

    if((a=3)==b) {
        cout<<a;
    }
    else {
        cout<<a+1;
    }
    return 0;
}