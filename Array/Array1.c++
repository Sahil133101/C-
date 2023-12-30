#include<iostream>
using namespace std;
int main(){

    int m;
    cin>>m;

    int arr[m];

    for(int i=1;i<=m;i++){
        cin>>arr[i];
    }

for(int i=1;i<=m;i++){
        cout<<arr[i];
    }

    return 0;
}