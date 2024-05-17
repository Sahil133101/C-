#include<iostream>
using namespace std;

int partiton(int n, int arr[], int s, int e){
    int pivot = arr[s];

    int count =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[s]);
    // left or right

    int i=s; 
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]< pivot){
            i++
        }
          while(arr[j]< pivot){
          j--;
    }
}

void quicksort(int n, int arr[], int s, int e){
    if(s>=e){
        return ;
    }

    int p = partition(arr,s,e);
// right
    quicksort(arr,s,p-1);
//left
    quicksort(arr,p+1,e);
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    return 0;
}