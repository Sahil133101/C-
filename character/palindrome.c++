#include<iostream>
using namespace std;

bool isPalindrome(char str[], int n){
    int s=0;

    int e =n-1;

    while(s<e){
        if(str[s] != str[e])
            return false;

        else{
            s++;
            e--;
        } 
        return true;   
        
    }
}

int length(char str[]){
    int count= 0;

    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char str[10];

    cin>> str;

    int len =length(str);

    cout<<"isPalindrome : "<<isPalindrome(str,len)<<endl;
}