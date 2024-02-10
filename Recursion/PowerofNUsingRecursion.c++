#include<iostream>
using namespace std;

int Power(int n){


    //base Case 
    if(n ==0){
        return 1;
    }


    // int Smallerpower = Power(n-1);

    // int biggerPower = 2*Smallerpower;

    return 2 *Power(n-1); // Recursive Relation
}

int main(){

    int n;
    cin>>n;

    cout<<Power(n);



    return 0;

}