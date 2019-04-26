//
// Created by JiangChao on 2019-04-26.
//

#include "../src/Bar.h"
#include "catch.hpp"

TEST_CASE("class Bar", "Bar")
{
    Bar bar;
    REQUIRE(bar.getName() != "");
    REQUIRE(bar.getVal() == "");
}
