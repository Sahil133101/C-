#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout<<num<<endl;


    // address of num

    cout<<"Adress of num is"<<&num<<endl;

    int *ptr = &num ;

    cout<<"adress"<<ptr<<endl;

    cout<<"value"<<&ptr<<endl;

    double d =4.3;

    double *ptr2 = &d;

    cout<<"adress"<<ptr2<<endl;

    cout<<"value of double"<<&ptr2<<endl;






    return 0;
}