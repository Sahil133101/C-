#include<iostream>
using namespace std;

void Reach(int distance, int source){

    cout<<"source"<<source <<"distance"<<distance<<endl;

    if(distance ==  source ){
        cout<<"reach at home";
        return ;
    }
    source++;

    Reach(distance, source);


}

int main(){

    int distance =10;

    int source =1;

    cout<<endl;


    Reach(distance, source);



    return 0;
}