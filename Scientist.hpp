#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

using namespace pandemic;

class Scientist : public Player
{
private:
    int n;
public:
    Scientist(Board, City,int);
    Scientist& discover_cure(Color);
};