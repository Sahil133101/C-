#include<iostream>
using namespace std;
class xyz {
    public:
int health;

int level;

int get_level() { return level; }

void set_level(int level) { 
    this->level = level;
}
    
    int gethealth() { return health; }

    void sethealth(char health) { 
    this->health = health;
    }
};
int main(){

xyz *ab = new xyz;

ab->set_level(20);
ab->sethealth('B');
cout<<"level: "<< ab->level <<endl;
cout<<"health: "<< ab->health <<endl;
cout<<"Sizeof: "<<sizeof(*ab)<<endl;
    return 0;
}