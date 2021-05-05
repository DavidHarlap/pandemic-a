#include "GeneSplicer.hpp"

using namespace pandemic;

GeneSplicer::GeneSplicer(Board b, City c) : Player(b, c,"GeneSplicer"){}
    
GeneSplicer& GeneSplicer::discover_cure(Color c){
    return *this;
}