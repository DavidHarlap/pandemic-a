#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Virologist : public Player
{
public:
    Virologist(Board, City);
    Virologist& treat(City);
};