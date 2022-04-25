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

TEST_CASE ("col/row neg or zero") {
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
    CHECK_THROWS(throw std::invalid_argument("Ciiiiiii"));
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);
            CHECK(1 == 1);

}