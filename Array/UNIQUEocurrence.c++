#include<iostream>
using namespace std;

bool findUnique(int n , int arr[]){
    

    int Frequency [1000]={0};
    

    for(int  i=1 ;i< n; i++){

        Frequency[arr[i]]++;

        if(Frequency[arr[i]]>1){
            return "False";
        }
    
    }

    return "True";



}

void Array(int n , int arr[])
{
    for(int i =1; i<n; i++){
        cin>>arr[i];
    }
    }
    int main(){
    int n;
    cin>>n;
    int arr[n];


Array(n, arr);
if(findUnique(n,arr)){
    cout<<"True";
}
else {
    cout<<"Flase";
}
    return 0;
}