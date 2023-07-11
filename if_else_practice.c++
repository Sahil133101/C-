// // #include<iostream>
// // using namespace std;
// // int main(){

// //     int a;
// //     int b;
// //      cin>>a;
// //      cin>>b;

// //      if (a==b){
// //         cout<<"square";

// //      }
// //      else {
// //         cout<<"recatngle";
// //      }
// //     return 0;


// // }

// #include<iostream>
// using namespace std;

// int main(){

//     int a ;
//     int b;
      
//     cin>>a;
//     cin>>b;

//     if (a>b){
//         cout<<"a is greater than b";
//     }

//     else {
//         cout<<"b is greater"
//     }
//     return 0;

// }

#include <iostream>
int main()
{
	using namespace std;
	int quantity,price;
	cout << "Enter quantity" << endl;
	cin >> quantity;
	price = quantity*100;
	if (price>1000){
		cout << "Total cost is " << price-(price*.1) << endl;
	}
	else{
		cout << "Total cost is " << price << endl;
	}
	return 0;
}