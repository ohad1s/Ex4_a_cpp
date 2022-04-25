#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"


#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
using namespace std;
namespace coup{
    Ambassador::Ambassador(Game g,std::string name) : Player(g,name){}
    Ambassador::~Ambassador(){}
    void Ambassador::income() {
        cout<<"ohad"<<endl;
    }
    void Ambassador::foreign_aid() {
        cout<<"ohad"<<endl;
    }
    void Ambassador::coup(Player p) {
        cout<<"ohad"<<endl;
    }
    string Ambassador::role() {
        return "ohad";
    }
    int Ambassador::coins(){
        return 5;
    }
    void Ambassador::transfer(Player p1,Player p2){
        cout<<"ohad"<<endl;
    }
}