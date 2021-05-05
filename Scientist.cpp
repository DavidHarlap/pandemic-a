#include "Scientist.hpp"

using namespace pandemic;
using namespace std;

Scientist::Scientist(Board b, City c,int num) : n(num), Player(b, c,"Scientist"){}

Scientist& Scientist::discover_cure(Color){
    return *this;
}