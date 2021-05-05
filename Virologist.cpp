#include "Virologist.hpp"

using namespace pandemic;

Virologist::Virologist(Board b, City c) : Player(b, c,"Virologist"){}
    
Virologist& Virologist::treat(City c){
    return *this;
}