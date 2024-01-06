#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int  main(){

vector<int>v;

v.push_back(1);
v.push_back(2);
v.push_back(3);

cout<<binary_search(v.begin(),v.end(),2)<<endl;
cout<<"hello world"<<endl;

int a=5;
int b=2;

cout<<"max"<<max(a,b)<<endl;

cout<<"min"<<" "<<min(a,b)<<endl;


return 0;
}