// #include<iostream>
// using namespace std;

// void print(int num){
//     cout<<num<<endl;
//     return;
// }

// int add(int num1, int num2 ){
//     int sum = num1+num2;
//     return sum;
// }

// int main(){

//     int a;
//     int b;
//     cin>>a;
//     cin>>b;


//     cout<< add(a,b)<<endl; 
//     return 0;

//}

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for (int i=2; i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a; 
    int b;
     
    cin>>a;
    cin>>b;

    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}