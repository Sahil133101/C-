#include<iostream>
using namespace std;

class Node {
    public :

    int data;

    Node* Next;

    Node(int data){

        this -> data = data;
        this -> Next = NULL;
    }
};

int main(){
    Node* n1= new Node(10);
     Node* n2= new Node(10);
cout<< n1 -> data<<endl;
cout<< n1 -> Next<<endl;

    return 0;
}