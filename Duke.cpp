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
    Duke::Duke(Game g,std::string name) : Player(g,name){}
    Duke::~Duke(){}
    void Duke::income() {
        cout<<"ohad"<<endl;
    }
    void Duke::foreign_aid() {
        cout<<"ohad"<<endl;
    }
    void Duke::coup(Player p) {
        cout<<"ohad"<<endl;
    }
    string Duke::role() {
        return "ohad";
    }
    int Duke::coins(){
        return 5;
    }
    void Duke::block(Player p){
        cout<<"ohad"<<endl;
    }
    void Duke::tax(){
        cout<<"ohad"<<endl;
    }
}