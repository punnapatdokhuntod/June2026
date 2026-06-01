// BY PUN //
#include <iostream>
using namespace std;
class Monster {
    public: 
    string tier ;
    string name ;
    int monsterHP ;
    int monsterDMG ;
    int isAttack(int enemyHP , int attackDMG){
        return enemyHP - attackDMG ;
    }
};
class Player {
    public: 
    string tier ;
    string name ;
    int playerHP ;
    int playerDMG ;
    int isAttack(int enemyHP , int attackDMG){
        return enemyHP - attackDMG ;
    }
};
int main () {
  Monster lord ;
  lord.tier = "S";
  lord.name = "lord";
  lord.monsterHP = 100 ;
  lord.monsterDMG = 10;
  
  Player hero;
  hero.tier = "B" ;
  hero.name = "hero";
  hero.playerHP = 50;
  hero.playerDMG = 5 ;
  
    int number ;
    while (number != 999 && hero.playerHP > 0){
        cout << "The boss is comming \n Tutorial\n NUMBER 1 for SLASH\n NUMBER 2 FOR DODGE\n NUMBER 999 for EXIT"<< endl ;
        cout << " choose you choice " ;
        cin >> number;
    }
}
