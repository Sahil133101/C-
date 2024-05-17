#include<iostream>
using namespace std;
bool isBinary(int arr, int n ,int start, int end, int key){

    //base case
    if(start>end){
        return false;
    }
int mid = (start+(end))/2;
    if(arr[mid]== key){
        return true;
    }

    if(arr[mid]<key){
        return isBinary(arr,mid+1,end,key);

    }
    else{
        return isBinary(arr  ,mid-1,end,key);
    }

} 

int main(){
    int n;
    cin>>n;
   
    int arr[n];

    int key;
    cin>> key;

    int start =0;

    int end = n-1;

   

    bool ans = isBinary(arr,n, start,end,key);

    if(ans){
        cout<<"Element found at index number"<<arr[n];
    }
    else{
        cout<<"Not found";
    }
return 0;
}