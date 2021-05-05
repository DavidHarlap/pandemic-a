#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class GeneSplicer : public Player
{
public:
    GeneSplicer(Board, City);
    GeneSplicer& discover_cure(Color);
};