#include<iostream>
using namespace std;


void check(string name1[], string name2[], int n, int m){

    int count[m] = {0};

    for(int i= 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(name1[i]== name2[j]){
                count[j]++;
            }
        }
    } //print the array
    for(int i=0; i<m; i++){
    cout<<count[i]<<endl;
}
}

//print the array



int main(){

    int n;

    cin>>n;

    string name1[n];

    for(int i = 0; i<n; i++){
        cin>>name1[i];
    }
    

    
    int m;

    cin>>m;

    string name2[m];

    for(int i = 0; i<m; i++){
        cin>>name2[i];
    }
check(name1,name2,n,m);

    return 0;
}