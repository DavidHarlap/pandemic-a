#pragma once

#include <set>
#include <string>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    class Player
    {
    protected:
        Board board;
        City currCity;
        std::set<City> cards;
        std::string type;

    public:
        Player(Board &, City, std::string);

        Player &drive(City);
        Player &fly_direct(City);
        Player &fly_charter(City);
        Player &fly_shuttle(City);
        Player &build();
        Player &discover_cure(Color);
        Player &treat(City);
        Player &take_card(City);
        std::string role();
    };
}