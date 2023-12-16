#include<iostream>
using namespace std;

int sumofArray (int n, int arr[] ){

    int sum = 0;
    for(int i=0; i<=n; i++){
        sum =sum +arr[i];
    }

    return sum;

}


int initializeARRAY(int n, int arr[]){
    for (int  i=0; i<=n; i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    initializeARRAY(n ,arr);

   int ans =  sumofArray(n,arr);

   cout<<"sum of Array:"<<ans<<endl;

    return 0;

}