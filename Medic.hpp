#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Medic : public Player
{
public:
    Medic(Board, City);
    Medic& treat(City);
};