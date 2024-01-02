#include<iostream>
#include<list>

using namespace std;
int main(){
list<int> l;

l.push_front(1);
l.push_back(3);

cout<<"Befor Erase"<<endl;
for(int i:l){
    cout<<i<<endl;
}


l.erase(l.begin());



cout<<"after erase"<<endl;

for(int i:l){
    cout<<i<<endl;
}


return 0;

}

