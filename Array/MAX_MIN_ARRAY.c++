
#include<iostream>
using namespace std;
int getMIN(int n, int arr[]) {
   
    int MIN = INT16_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < MIN) {
            MIN = arr[i];
        }
       
        

    }
    return MIN;
}


int getMAX(int n, int arr[]) {
    int MAX = INT16_MIN;
   

    for(int i = 0; i < n; i++) {
        if(arr[i] > MAX) {
            MAX = arr[i];
        }
       
        

    }
    cout<<arr[MAX];
    return MAX;
}

void initializeARRAY(int arr[]) {
    cout << "Enter " << n << " elements for the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int main() {
   

    int arr[] = {7 ,1, -17, -7,70,190,17,102,-250,25}
    int n = size.arr();

    initializeARRAY(n, arr);
    int maxElement = getMAX(n ,arr);
    int minElement  = getMIN(n, arr);

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;


    return 0;
}
