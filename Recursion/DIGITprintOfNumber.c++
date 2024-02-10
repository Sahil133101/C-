#include<iostream>
using namespace std;
// base code
int digit(int n, string arr[]){

    if(n==0){
        return 0;
    }
// processing call
    int digit1  = n%10;
    n= n/10;
// recursive call
    digit(n,arr);

    cout<<arr[digit1]<<" ";
}

int main(){

    


    string arr[10] = {"zero", "one","two","three", "four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

     
        digit(n, arr);

        cout<<" ";
    
    return 0;
}