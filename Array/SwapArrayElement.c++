#include<iostream>
using namespace std;

void SwapArray(int n ,  int arr[]){
    for (int i=1; i<=n; i++){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
    
}

void printArray(int n ,int arr[]){
    for(int i=1; i<=n;i++){
        cout<<arr[i];
    }
}


void initializeARRAY(int n , int arr[]){
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];

        initializeARRAY(n ,arr);
        SwapArray(n , arr);
        printArray(n,arr);
    return 0;



}