#include<iostream>
using namespace std; 

void reversekTimes(int n, int k, int arr[]){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);{
            start++;
            end--;
        }
    }
}
int main(){
    int n , k;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"enter the time to reverse the array";
    cin>>k;
    
    cout<<"original array";
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    reversekTimes(n,k,arr);
    cout << "Array after reversing " << k << " times: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}