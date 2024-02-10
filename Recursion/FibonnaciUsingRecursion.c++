#include<iostream>
using namespace std;

int f(int n){

    // int nextTerm =0;

    // cout<<n1<<" "<<n2<<" "<<endl;

    // for(int i=2 ; i<=n3; i++){

    //     nextTerm =  n1+n2;
        
    //     cout<<nextTerm<<" "<<endl;
    //     n1 = n2;
    //     n2  = nextTerm;


      

   // }
   // base case 
   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }

int ans =f(n-1)+f(n-2);

//cout<<ans<<" "<<endl;

return  ans;
  


}

int main(){

    int n;
    cin>>n;
    // cout << "Fibonacci Series: ";
    // for (int i = 0; i < n; ++i) {
    //     cout << fibonacci(i) << " ";
    // }
    

    // int n2 =1;

   
    // int n3;

    // cin>>n3;

cout<< f(n);

    return 0;
}