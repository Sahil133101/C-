#include<iostream>
using namespace std;

class Hero {

    private:
    int health;

    public :

    char level ;

    
 int getHealth() { 
    return health;
     }

     char getlevel() { 
        return level;
     }

     void sethealth(int h) { 
        health = h;
     }

     void setlevel(char level) {
        level = level;
     }




};

int main(){

Hero suresh;
suresh.sethealth(70);
suresh.level = 'a';

cout<< suresh.getHealth() << endl;
cout<< suresh.level << endl;

};