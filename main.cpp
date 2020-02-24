#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "ArrayList.h"



TEST_CASE( "ArrayList", "[ArrayList]" ) {
    ArrayList L;
    REQUIRE(L.getSize() == 0);
}