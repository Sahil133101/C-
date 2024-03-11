#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2; // Finding the middle index of the array

    int len1= mid-s+1; // Length of the first half of the array

    int len2 = e-mid; // Length of the second half of the array

    int *first = new int[len1]; // Dynamically allocating memory for the first half

    int *second = new int[len2]; // Dynamically allocating memory for the second half

    // Copy values from the original array to the first and second arrays
    int mainArrayIndex= s;
    for(int i = 0; i<len1; i++){
        first[i]= arr[mainArrayIndex++];
    }

    mainArrayIndex= mid+1; // Resetting the mainArrayIndex for the second half
    for(int i=0 ;i<len2; i++){
        second[i]= arr[mainArrayIndex++];
    }

    // Merge the two sorted arrays back into the original array
    int index1 =0;
    int index2 = 0;
    mainArrayIndex =s;
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy the remaining elements from the first array
    while(index1 < len1){
        arr[mainArrayIndex++]= first[index1++];
    }

    // Copy the remaining elements from the second array
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free the dynamically allocated memory
    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){ // Base case: if the start index is greater than or equal to the end index, the array is already sorted
        return ;
    }

    int mid = (s+e)/2; // Finding the middle index of the array

    mergeSort(arr,s,mid); // Sorting the first half
    mergeSort(arr,mid+1,e); // Sorting the second half

    // Merging the sorted halves
    merge(arr,s,e);
}

int main(){
    int n;
    cin>>n; // Taking input for the size of the array

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i]; // Taking input for the elements of the array
    }

    mergeSort(arr, 0, n-1); // Calling the mergeSort function

    // Printing the sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
