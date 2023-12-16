#include<iostream>
using namespace std;

int linerSearch(int n, int arr[], int key){


for(int i=0; i<n ; i++){
    if(arr[i]==key ){
        cout<<"key is found";
        return i;
    }

}
return -1;
}



void initializeARRAY( int n , int arr[]){
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
}

int main(){

    cout<<"enter your element of array:";
    int n;
    cin>>n;

     int arr[n];

    cout<<"what you want to found in the array";
    initializeARRAY(n, arr);


    int key;
     cin>>key;


     
   

    cout<<linerSearch( n, arr ,key);

    return 0;
}