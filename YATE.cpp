#include <iostream>
using namespace std;
class Player {
    public:
    string name;
    int age ;
    int exp=100;
    int hp=100;
    void isRun(){
     cout << name << " is running.( - 40 stamina)"<< endl; 
    }
    void isWalk(){
     cout << name << " is walking.( - 15 stamina)"<< endl; 
    }
    void isRest(){
        cout << name << " is resting.( + 30 stamina)" << endl;
    }
};
int main () {
    string playerName ;
    cout << "Enter you player name = ";
    cin >> playerName ;
    Player yate;
    yate.name = playerName;
    yate.age = 17;
    yate.isRun() ;
    yate.isRest() ;
    return 0;
}
