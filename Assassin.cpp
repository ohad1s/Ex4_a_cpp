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
    Assassin::Assassin(Game g,std::string name) : Player(g,name){}
    Assassin::~Assassin(){}
    void Assassin::income() {
        cout<<"ohad"<<endl;
    }
    void Assassin::foreign_aid() {
        cout<<"ohad"<<endl;
    }
    void Assassin::coup(Player p) {
        cout<<"ohad"<<endl;
    }
    string Assassin::role() {
        return "ohad";
    }
    int Assassin::coins(){
        return 5;
    }
}
