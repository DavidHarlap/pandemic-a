#include "Dispatcher.hpp"

using namespace pandemic;
using namespace std;


Dispatcher::Dispatcher(Board b, City c) : Player(b, c,"Dispatcher"){}
    
Dispatcher& Dispatcher::fly_direct(City){
    return *this;
}