// #include<iostream>
// using namespace std;

// int main(){
//      int i;
      
//       for(int i=1; i<=10; i++){

//         cout<<i<<endl;

//       }    return 0 ;

// }

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    
    for(int i =1;i<=10; i++){
        cout<<i<<endl;
        sum = sum+i;
        
    }
    cout<<sum<<endl;
    return 0;
}