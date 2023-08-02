//sum of n natural number using function
#include<iostream>
using namespace std;

int sum(int n){
    int x=0;
    for(int i=1; i<=n; i++){
      x=x+i;   
    }

    return x;

}

int main(){

    int n;
    cin>>n;
    int result = sum(n);
    cout<<result;
    return 0;
}