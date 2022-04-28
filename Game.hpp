//
// Created by shira on 25/04/2022.
//

#ifndef CPP_EX4_A_GAME_H
#define CPP_EX4_A_GAME_H
#pragma once
#endif //CPP_EX4_A_GAME_H
namespace coup {
    using namespace std;

    class Game {
    private:
        int p;
    public:
        Game();

        ~Game();

        vector <string> players();

        int turn();
    };
}