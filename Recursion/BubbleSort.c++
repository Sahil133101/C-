#include<iostream>
using namespace std;

void bubble(int arr[] , int n){
    // base case 
    if(n==1 || n==0){
        return ;
    }
  // case solved largest element into last
    for(int i=0 ;i<n; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubble(arr,n-1);
}

int  main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubble(arr,n);

    for(int i=0; i<n; i++ ){
        cout<<arr[i];
    }
}