#include<iostream>
using namespace std;


int  Unique(int n ,int arr[]){

    int ans =0;
    for (int i=1;i<=n;i++){ 

        ans = ans^arr[i];
    }
    return ans;
}

void initializeARRAY( int n , int arr[]){
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
}


int main(){
    int  n;
    cin >> n;
    int arr[n];

    initializeARRAY(n,arr);
    cout<< Unique(n,arr);

    return 0;


}