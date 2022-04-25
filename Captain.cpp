//
// Created by shira on 25/04/2022.
//
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
namespace coup{
    Captain::Captain(Game g,std::string name) : Player(g,name){}
    Captain::~Captain(){}
    void  Captain::income() {
        cout<<"ohad"<<endl;
    }
    void  Captain::foreign_aid() {
        cout<<"ohad"<<endl;
    }
    void  Captain::coup(Player p) {
        cout<<"ohad"<<endl;
    }
    string  Captain::role() {
        return "ohad";
    }
    int  Captain::coins(){
        return 5;
    }
    void  Captain::block(Player p){
        cout<<"ohad"<<endl;
    }
    void  Captain::steal(Player p1){
        cout<<"ohad"<<endl;
    }
}