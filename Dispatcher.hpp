#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Dispatcher : public Player
{
public:
    Dispatcher(Board, City);
    Dispatcher& fly_direct(City);
};