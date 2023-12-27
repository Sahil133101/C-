#include<iostream>
using namespace std;


void Merge(int n1, int arr1 [], int n2, int arr2[], int merge[]){
    int i=0; int k=0; int j=0
            while(i<n1 && j<n2){
                if(arr[i]<=arr[j]){
                    merge[k ] = arr1[i];
                    k++;
                    i++
                }
                else {
                    merge = arr2[j];
                    k++;
                    j++;
                }
                
            }
            while(i<n1){
                merge = arr1[i];
                
            }