#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* Next;


    Node(int data){
        this -> data =data;
        this -> Next = NULL;
    }
};
void InsertAtHead( Node* &Head , int newData){
    //New Node Create
    Node* temp = new Node(newData);
    temp -> Next = Head;

    Head = temp;

}

void Print(Node* &Head){
Node* temp = Head;

while(temp != NULL){
    cout<< temp -> data <<" ";
    temp = temp -> Next;
}
cout<<endl;
}

int main(){

    Node* node1 = new Node(10);

    //cout<< node1 -> data <<endl;
    //cout<<node1 -> Next <<endl;
//Head Pointer to Node1

Node* Head = node1;
 InsertAtHead(Head , 12);
 InsertAtHead(Head, 13);

    Print(Head);
    return 0;
}