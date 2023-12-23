#include<iostream>
using namespace std ;


int Pivot (int n, int arr[]){
    int start =0;
    int end = n-1;


    int mid = (start+end)/2;

    while(start<end){
        if( arr[mid] >=arr[0]){
            start = mid+1;
        }

        
        else {

            end = mid;

        }

        mid  =(start+end)/2;
    }

    return start;
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

    int a = Pivot(n , arr);

    cout<<a;

    return 0;
}