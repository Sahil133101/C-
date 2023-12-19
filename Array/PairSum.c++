#include<iostream>
using namespace std;

void FindPair(int n, int arr[], int s){

    sort(arr, arr+n);
    for(int i=0; i<=n; i++ ){
        for(int j=i+1; j<=n; j++){
            if(arr[i] +arr[j] ==s ){
                cout<<"Pair"<<arr[i]<<arr[j];
                break;
                
                

            }
            


        }
        
    }
    
}


void Array(int n , int arr[]){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    cout<<"enter the size of Array";
    int n;
    
    cin>>n;

   

    int arr[n];

    

    int s;

    cin>>s;
        cout<<"enter the target value";
    Array(n, arr);
    FindPair(n,arr,s);

    return 0;

}