#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
    for (int i= 0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return "not available";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int key;
    cin>> key;

    cout<<search(arr,n,key);

    
    return 0;
}