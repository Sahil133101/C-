#include<iostream>
using namespace std ;

void WavePrint(int arr[][3]){
    for(int j=0 ;j <3; j++){
           if (j % 2 == 0) {
            for (int i = 0; i < 3; i++) {
                cout << arr[i][j] << " ";
            }
        }
 
        // If the current column
        // is odd indexed, print
        // it in reverse order
        else {
            for (int i = 3 - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}
    


int  main(){
        int arr[3][3];
        for(int i=0; i<3; i++){
            for(int j=0 ; j<3; j++){
                cin>>arr[i][j];
            }
        }

         WavePrint(arr);

         return 0;
}