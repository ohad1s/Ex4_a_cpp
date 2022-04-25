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
    Contessa::Contessa(Game g, std::string name) : Player(g,name){}

    Contessa::~Contessa(){}

    void Contessa::income() {
        cout << "ohad" << endl;
    }

    void Contessa::foreign_aid() {
        cout << "ohad" << endl;
    }

    void Contessa::coup(Player p) {
        cout << "ohad" << endl;
    }

    string Contessa::role() {
        return "ohad";
    }

    int Contessa::coins() {
        return 5;
    }
    void Contessa::block(Player p){
        cout<<"ohad"<<endl;
    }
}