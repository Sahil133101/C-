#include<iostream>
using namespace std ;


int Pivot ( int arr[], int n){
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

        mid  =  (start+end)/2;
    }

    return start;
}




int main(){
    

    int arr[5] = {8, 10 , 17 , 1 ,3};



    int a = Pivot(arr,5);

    cout<<a;

    return 0;
}