
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "utility.hpp"

TEST_CASE("Test capitalize") {

    {
        std::string name{"Per"};
        capitalize(name);
        CHECK(name == "Per");
    }

    {
        std::string name{"perSen"};
        capitalize(name);
        CHECK(name == "Persen");
    }

}
