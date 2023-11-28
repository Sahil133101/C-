// #include<iostream>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;
//     int i=1;

//     while(i<=n){

//         cout<<i<<endl;
//         i=i+1;
//     }
//             return 0;

// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i= 0;
    int sum=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
        cout<<sum<<endl;

    }
    return 0;

    
}