#include<iostream>
using namespace std;

void intilizeArray(int n , int arr[] ){

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
}

void printArray(int n , int arr[ ]){
    for(int i=1; i<=n; i++){
        cout<<arr[i] << " ";
    }
}


int main(){

    int n;
    cin>>n;

    int arr[n];

    

       intilizeArray(n, arr);
       printArray(n, arr);

    return 0;

 

}