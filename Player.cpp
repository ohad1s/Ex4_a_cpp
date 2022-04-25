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
    Player::Player(Game g, string name) {
}

    Player::~Player() {}

void Player::income() {}

void Player::foreign_aid() {}

void Player::coup(Player p){
}

string Player::role() { return "ohad"; }

int Player::coins() {
    return 5;
}

    Game::Game(){}

    Game::~Game(){}

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