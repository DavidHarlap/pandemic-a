#include "doctest.h"

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

#include <iostream>
#include <stdexcept>

using namespace pandemic;
TEST_CASE("TEST 1")
{
    Board board;
    board[City::Kinshasa] = 3;      // put 3 yellow disease cubes in Kinshasa.
	board[City::Kinshasa] = 2;      // change number of disease cubes in Kinshasa to 2.
	board[City::MexicoCity] = 3;    // put 3 yellow disease cubes in MexicoCity
	board[City::HoChiMinhCity] = 1; // put 1 red disease cube in HoChiMinhCity
	board[City::Chicago] = 1;       // put 1 blue disease cube in Chicago
    CHECK(board[City::Kinshasa] == 2);
    CHECK(board[City::MexicoCity] == 3);
    CHECK(board[City::HoChiMinhCity] == 1);
    CHECK(board[City::Chicago] == 1);

    Dispatcher dispat {board, City::Atlanta};
    FieldDoctor fieldDR {board, City::Atlanta};
    Researcher res {board, City::Atlanta};
    Scientist scient {board, City::Atlanta,2};
    GeneSplicer gsplicer {board, City::Atlanta};
    OperationsExpert opexpert {board, City::Atlanta};
    Medic med {board, City::Atlanta};
    Virologist vir {board, City::Atlanta};

    
    CHECK_NOTHROW(med.take_card(City::Algiers).take_card(City::Madrid));
    CHECK_THROWS(med.take_card(City::Algiers));

    CHECK_NOTHROW(dispat.drive(City::Miami));
    CHECK_THROWS(dispat.fly_direct(City::Algiers));
    CHECK_THROWS(dispat.fly_charter(City::Algiers));
    CHECK_THROWS(dispat.fly_shuttle(City::Algiers));

    CHECK_NOTHROW(med.fly_direct(City::Algiers));

}

TEST_CASE("TEST 2"){
    Board board;
    OperationsExpert opexpert {board, City::Atlanta};  // initialize an "operations expert" opexpert on the given board, in Atlanta.
    opexpert.take_card(City::Johannesburg)
        .take_card(City::Khartoum)
        .take_card(City::SaoPaulo)
        .take_card(City::BuenosAires)
        .take_card(City::HoChiMinhCity);
    CHECK_NOTHROW(opexpert.build());
    CHECK_NOTHROW(opexpert.drive(City::Washington));
    CHECK_THROWS(opexpert.drive(City::Madrid));

    CHECK_NOTHROW(opexpert.fly_direct(City::Johannesburg));
    CHECK_THROWS(opexpert.fly_direct(City::Taipei));

    CHECK_NOTHROW(opexpert.drive(City::Kinshasa));

}

TEST_CASE("TEST 3"){
    Board b1;
    Scientist scient1(b1, City::Washington, 4);
    Scientist scient2(b1, City::Washington, 2);
    CHECK_NOTHROW(scient1.take_card(City::Sydney)
	      .take_card(City::HoChiMinhCity)
	      .take_card(City::HongKong));
    CHECK_NOTHROW(scient2.take_card(City::Sydney)
	      .take_card(City::HoChiMinhCity)
	      .take_card(City::Bangkok));
    
    CHECK_THROWS(scient2.discover_cure(Color::Red));
    CHECK_NOTHROW(scient1.discover_cure(Color::Red));


    }
    