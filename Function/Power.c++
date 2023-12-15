#include<iostream>
using namespace std;

int power(int a , int b){

    int ans =1;

    for(int i=1 ; i<=b;i++){
        ans = ans*a;
    }

    return ans;
}

int main(){
    int a;
    cin>>a;

    int b;
    cin>>b;

    int result = power(a,b);
      cout<<result <<endl;
    
    int c;
    int d;

    cin>>c;

    cin>>d;

    int res = power(c,d);

    cout<<res<<endl;


  

    return 0;


}