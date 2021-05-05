#include "FieldDoctor.hpp"

using namespace pandemic;

FieldDoctor::FieldDoctor(Board b, City c)  : Player(b, c,"FieldDoctor"){}
    
FieldDoctor& FieldDoctor::treat(City c){
    return *this;
}