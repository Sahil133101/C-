#include<iostream>
using namespace std;

int sum(int n, int arr[]){

    // int sum= 0;

    // for(int i=0; i<n; i++){
    // sum = sum+arr[i];
    // }

// return sum;

//base case

if(n==0){
    return 0;
}
return arr[n-1]+sum(n-1, arr);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x= sum(n,arr);
    cout<<x;

    return 0;
}