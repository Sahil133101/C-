#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    cout<<"Size ->"<<v.capacity()<<endl;

    v.push_back(1);

    cout<<"Size ->" <<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size->"<<v.capacity()<<endl;

    v.push_back(3);

    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size->"<<v.capacity()<<endl;
    cout<<"Element at 2nd index"<< v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    cout<<"Before-pop"<<endl;
    for(int i :v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<" ";
    }


    return 0;

     
}