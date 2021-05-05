#include "OperationsExpert.hpp"

using namespace pandemic;
using namespace std;

OperationsExpert::OperationsExpert(Board b, City c) : Player(b, c,"OperationsExpert"){}

OperationsExpert& OperationsExpert::build(){
    return *this;
}