#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    //baseCase

    if(n==0||n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaningPart = isSorted(arr+1 ,n-1);
            return remaningPart;
        }
    }



int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool ans = isSorted(arr, n);
    if(ans){
        cout<<"sorted";
    }
    else{
        cout<<"Unsorted";
    }

    return 0;
}