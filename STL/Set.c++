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

    set<int> :: iterator it =s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"0 is present or not"<<s.count(0)<<endl;

    set<int>:: iterator itr = s.find(0);

    for(auto it = itr;  it!=s.end(); it++){
        cout<<*it<<endl;

    }cout<<endl;

    
}