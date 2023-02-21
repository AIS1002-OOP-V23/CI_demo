

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "person.hpp"

TEST_CASE("Test person") {

    person p("per");

    CHECK(p.get_name() == "Per");

    p.set_name("");
    CHECK(p.get_name() == "Per");

    p.set_name("per");
    CHECK(p.get_name() == "Per");

}


