#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Researcher : public Player
{
public:
    Researcher(Board, City);
    Researcher& discover_cure(Color);
};