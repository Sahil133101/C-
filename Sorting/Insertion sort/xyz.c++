#include<iostream>
using namespace std;

void rev (int n, int arr[],  int m ){
    int start  = m+1;
    int end =n-1 ;

    while(start<=end){
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}


void output(int n, int arr[]){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}


void input(int n, int arr[]){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    int m;

    cin>>m;

    input(n,arr);
    rev(n,arr,m);
    output(n,arr);



    return 0;

}