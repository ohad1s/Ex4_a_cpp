//
// Created by shira on 25/04/2022.
//

#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

namespace coup {


    Game::Game() {}

    Game::~Game() {}

    vector <string> Game::players() {
        vector <string> pl;
        for (int i = 1; i <= 5; i++) {
            pl.push_back("Yossi");
        }
        return pl;
    }

    int Game::turn() {
        return 1;
    }
}