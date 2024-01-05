#include<iostream>
#include<map>

using namespace std;

int main(){

    map<int, string> a;

    a[1]= "sahil";
    a[2] = "sharma";
    a[3] =  "vishal";
    a[4] = "sharma";

    a.insert({5, "kunal"});


for(auto i : a){
    cout<<i.first<<" "<<i.second<<endl;
}

    return 0;
}