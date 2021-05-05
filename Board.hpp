#pragma once
#include <map>
#include <iostream>
#include <set>
#include "City.hpp"
#include "Color.hpp"


namespace pandemic
{
    class Board
    {
        private:
            std::set<City> research_stations;
            std::map<City,int> disease_cubes;
            std::map<Color, bool> is_cure;
            static std::map<City,Color> disease_color;
            static std::map<City, std::set<City>> neighbour;
            
        public:
            Board();
            const bool is_clean();
            void remove_cures();
            const int operator[](City c) const;
            int& operator[](City c);
                   
            friend std::ostream& operator<<(std::ostream& os, const Board& b);            
    };
}