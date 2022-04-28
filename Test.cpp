/**
 * AUTHOR: Ohad Shirazi
 * Date: 24-4-2022
 */
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"

using namespace coup;

#include "doctest.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;
using namespace coup;

TEST_CASE ("good cases") {
    Game game_1{};
    Duke duke{game_1, "Ohad"};
    Assassin assassin{game_1, "Or"};
    Ambassador ambassador{game_1, "Liron"};
    Captain captain{game_1, "Moshe"};
    Contessa contessa{game_1, "Revital"};

    CHECK_NOTHROW(vector<string> players = game_1.players());
    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());
    CHECK_NOTHROW(duke.coins());
    CHECK_NOTHROW(assassin.coins());
    CHECK_NOTHROW(ambassador.coins());
    CHECK_NOTHROW(captain.coins());
    CHECK_NOTHROW(contessa.coins());
    CHECK_NOTHROW(duke.role());
    CHECK_NOTHROW(assassin.role());
    CHECK_NOTHROW(ambassador.role());
    CHECK_NOTHROW(captain.role());
    CHECK_NOTHROW(contessa.role());
    CHECK_NOTHROW(duke.foreign_aid());
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.foreign_aid());
    CHECK_NOTHROW(captain.foreign_aid());
    CHECK_NOTHROW(contessa.foreign_aid());


}
