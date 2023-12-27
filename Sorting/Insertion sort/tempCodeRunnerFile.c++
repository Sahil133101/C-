#include<iostream>
using namespace std;

void insertion(int n, int arr[]){
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[j]> arr[i]){
                swap(arr[j], arr[i])
            }
        }
    }
}

void Ouput(int n, int arr[]){
    for(int i=0 ;i<n; i++)
    {
        cout<<arr[i];
    }}


void input(int n, int arr[]){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    input(n,arr);
    Ouput(n,arr);
    insertion(n,arr);

    return 0;
}