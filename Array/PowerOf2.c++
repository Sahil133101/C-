#include<iostream>
using namespace std;

void powerof2(int n, int arr []){

    for(int i=1 ; i<=n ; i++){

        int pow =arr[i];

        if(int pow = arr[i]%2 == 0){
;
            cout<<"power of two";

        }

        else {
            cout<<"not";
        }
        
    }

    

}


void initializeARRAY(int n , int arr []){
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    initializeARRAY(n ,arr);
    powerof2(n ,arr);

    return 0;

}