#include<iostream>
using namespace std;
void print(int arr[], int n){
    cout<<"Size of array is:"<< n<< endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;

}

bool isFind(int arr[], int n, int key){
    print(arr, n);
    //base case
    if(n == 0){
        return false;
        
    }
    if(arr[0] == key ){
        return true;
    }
    else{
        bool reaminingPart = isFind(arr+1, n-1, key);
        return reaminingPart;
    }
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    int key= 4;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool ans = isFind(arr,n,key);
    if(ans){
        cout<<"FIND";
    }
    else{
        cout<<"NotFOund";
    }
    return 0;
}