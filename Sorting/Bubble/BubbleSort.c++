#include<iostream>
using namespace std;

void Bubble(int n, int arr[]){
    for(int i =0; i<n; i++){
        for(int j=0; j<n ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void outputArray(int n , int arr[]){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}




void Array(int n, int arr[]){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    Array(n, arr);
    Bubble(n,arr);
    outputArray(n,arr);

    return 0;
}