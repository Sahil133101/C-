#include<iostream>
using namespace std;

void left(int arr[], int n, int k){
    
    int start= 0;
    
    int end =n-1;
    
    
    for(int i=0; i<k; i++){
        int temp =arr[start];
        
         for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1]; // Shift elements to the left
        }
        arr[n - 1] = temp; // Assign the first element to the last position
    }
    for(int i=0; i<n; i++){
           cout<<arr[i]<<" ";
    }

    
    }


int main(){
    
    int n;
    
    cin>>n;
    
    int arr[n];
    
    int k;
    cin>>k;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    left(arr,n,k);
    
 
    
    
    return 0;
}
