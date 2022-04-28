//
// Created by shira on 25/04/2022.
//
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include "Game.hpp"
#pragma once
#ifndef CPP_EX4_A_PLAYER_H
#define CPP_EX4_A_PLAYER_H

#endif //CPP_EX4_A_PLAYER_H
namespace coup {
    using namespace std;

//    class Game {
//    private:
//        int p;
//    public:
//        Game();
//
//        ~Game();
//
//        vector <string> players();
//
//        int turn();
//    };

    class Player {
    protected:
        string name;
    public:
        Player(Game& g,string name);
        ~Player();
        void income();
        void foreign_aid();
        void coup(Player p);
        string role();
        int coins();
    };
}