//
// Created by JiangChao on 2019-04-26.
//
#include "../src/Foo.h"
#include "catch.hpp"
#include "../src/Bar.h"

TEST_CASE(" class Foo", "Foo")
{
    Bar bar;
    Foo foo;

    REQUIRE(foo.getA() == 1);
    REQUIRE(foo.getB() == 0);
    REQUIRE(foo.getC() == 0);
}
