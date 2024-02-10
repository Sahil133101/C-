#include<iostream>
using namespace std;

void fibonacci(int n1, int n2, int n3){

    int nextTerm =0;

    cout<<n1<<" "<<n2<<" "<<endl;

    for(int i=2 ; i<=n3; i++){

        nextTerm =  n1+n2;
        
        cout<<nextTerm<<" "<<endl;
        n1 = n2;
        n2  = nextTerm;


      

    }

  


}

int main(){

    int n1 =0;
    

    int n2 =1;

   
    int n3;

    cin>>n3;

    fibonacci(n1, n2 , n3);

    return 0;
}