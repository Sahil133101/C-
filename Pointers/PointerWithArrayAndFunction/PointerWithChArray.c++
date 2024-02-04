#include<iostream>

using namespace std ;

int main(){


    int arr[5]= {
        1,2,3,4,
    };

char ch[7] = "abcdef";


cout<<arr<<endl;

cout<<ch<<endl;

char *cha = &ch[7];


cout<<cha<<endl;

cout<<&cha<<endl;

cout<<*cha<<endl;




    return 0;
}