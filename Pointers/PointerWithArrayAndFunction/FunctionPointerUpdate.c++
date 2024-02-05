#include<iostream>
using namespace std;

void update(int *val){
    //val =val+1; update the address of the pointer

    cout<< val<<endl;

    // *val = *val+1;  update the value of the pointer

    cout<< *val<<endl;


}

int main() {


    int value = 5;

    int *val = &value;


    update(val);



    return 0;
}   