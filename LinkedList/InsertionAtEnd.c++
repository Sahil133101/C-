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
void nth( Node* Head, int position, int d){
    Node* temp = Head;
    int count  =1;
    while( count < position-1){
        temp = temp -> Next;

        count++;
    }
    Node* Three = new Node(d);
    Node* Three -> Next = temp -> Next
    temp -> Next = Node* Three
    

}
void insertAtEnd(Node* Tail,  int newData){

    Node* N1 = new Node(newData);

    Tail -> Next = N1;
    Tail = N1;
}

void print(Node* Head  ){
    
    Node* N1 = Head;

    while(N1 != NULL){
        cout<< N1 -> data << endl;
      //  cout<< N1 <<endl;
        N1= N1 -> Next;
    }
  
    cout<<endl;
}

int main (){

    Node* Node1  = new Node(10);

    Node* Tail = Node1;
    Node* Head  = Node1;
    insertAtEnd(Tail,12);
    insertAtEnd(Tail, 13); 

    print(Head);
    return 0;
}