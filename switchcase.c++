// #include<iostream>
// using namespace std;
 
// int main(){
//     char button;
//     cin>>button;
    
//     switch(button){
//         case 'a':
//         cout<<"kunal";
//         break;

//         case 'b':
//         cout<<"pulkit";
//         break;

//         default: 
//         cout<<"sahil";

//     }


//     return 0;



// }

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"enter your first number";
    cin>>a;

    int b;

    cout<<"enter your second number"
    cin>>b;

    char op;

    switch(op){
        case'+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case  '/':
        cout<<a/b<<endl;
        break;

        


    }

return 0;

}
