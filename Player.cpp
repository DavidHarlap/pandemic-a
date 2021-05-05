#include "Player.hpp"
using namespace std;
using namespace pandemic;

Player::Player(Board &b, City c,string str) : board(b),currCity(c),type(str) {}

Player& Player::drive(City c){
    return *this;
}
Player& Player::fly_direct(City){
    return *this;
}
Player& Player::fly_charter(City){
    return *this;
}
Player& Player::fly_shuttle(City){
    return *this;
}
Player& Player::build(){
    return *this;
}

Player& Player::discover_cure(Color){
    return *this;
}
Player& Player::treat(City){
    return *this;
}
Player& Player::take_card(City){
    return *this;
}
std::string Player::role(){
    return type;
}