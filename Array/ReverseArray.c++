#include<iostream>
using namespace std;




int  main(){
    
    cout<<"enter size of Array";
    int n;
    cin>>n;
    
    cout<<"Enter the element of array";
    int arr[n];
    
    for(int i=0;i <=n; i++){
        cin>>arr[i];
    }

    int start=0;
    int end= n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

