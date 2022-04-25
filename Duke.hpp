//
// Created by shira on 25/04/2022.
//
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#ifndef CPP_EX4_A_DUKE_H
#define CPP_EX4_A_DUKE_H

#endif //CPP_EX4_A_DUKE_H
namespace coup{
    class Duke : public Player {
    private:
        Game game;
        std::string name;
    public:
        Duke(Game g,std::string name);
        ~Duke();
        void income();
        void foreign_aid();
        void coup(Player p);
        string role();
        int coins();
        void block(Player p);
        void tax();
    };
}