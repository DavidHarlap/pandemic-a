#include "Researcher.hpp"

using namespace pandemic;

Researcher::Researcher(Board b, City c) : Player(b, c,"Researcher"){}
    
Researcher& Researcher::discover_cure(Color c){
    return *this;
}