#include "Medic.hpp"

using namespace pandemic;

Medic::Medic(Board b, City c) : Player(b, c,"Medic"){}
    
Medic& Medic::treat(City c){
    return *this;
}