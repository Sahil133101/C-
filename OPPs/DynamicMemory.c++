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
    
};
int main(){

xyz *ab = new xyz;

ab->set_level(20);
cout<<"level: "<< ab->level <<endl;
cout<<"Sizeof: "<<sizeof(*ab)<<endl;
    return 0;
}