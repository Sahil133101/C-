// #include<iostream>
// using namespace std;
// int main(){

//     int row,col;

//     cin>>row>>col;

//     for(int i=1; i<=row;  i++){
//         for (int j=1; j<=col; j++){
//             if(i==1 || i==row){

            
//             cout<<"*";
//         }
//         else if(j==1 || j==col){
//             cout<<"*"
//         }
//         else{
//             cout<<" ";
//         }
        
//     }
//     cout<<endl;
//     }
    
    

//     return 0;

// }

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1 i<=n; i--){
        cout<<"x";
    }

    return 0;
}

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n; i++){
        for(int j=1; j<=i;j++){
        cout<<"x";
    }
    cout<<endl;
    }

    return 0;
}

