#include<iostream>

#include<queue>
using namespace std;

int main(){

    priority_queue<int> max;
    max.push(0);
    max.push(1);
    max.push(2);
    max.push(3);

    int m = max.size();

    cout<<m<<endl;

    for(int i=0; i<m; i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;

    priority_queue<int,vector<int>, greater<int> >mini;
    mini.push(0);
    mini.push(1);
    mini.push(2);
    mini.push(3);

    int n = mini.size();

    for(int i=0; i<n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    return 0;
}