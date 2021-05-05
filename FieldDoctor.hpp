#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class FieldDoctor : public Player
{
public:
    FieldDoctor(Board, City);
    FieldDoctor& treat(City);
};