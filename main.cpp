#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ArrayList.h"



TEST_CASE( "ArrayList", "[ArrayList]" ) {
    ArrayList L;
    REQUIRE(L.getSize() == 0);

    L.append(6);
    L.append(9);
    REQUIRE(L.getSize() == 2);
    REQUIRE(L.at(0) == 6);
    REQUIRE(L.at(1) == 9);


}