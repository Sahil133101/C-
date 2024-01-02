#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // d.pop_back();

    cout<<"First index element"<<d.at(1)<<endl;

    for (int i:d){
        cout<<i<<" ";
    }

    return 0;

}

