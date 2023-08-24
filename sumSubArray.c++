#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x =n*(n+1)/2;
    cout<<"number of sub array"," "<<x<<endl;
    int curr=0;
    for(int i=0; i<n; i++){
        curr=0;
        for(int j=i; j<n; j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }
    return 0;
}