#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(2);

    int n=  s.size();

    for(int i=0 ; i<n; i++){
        cout<<i<<endl;
    }
}