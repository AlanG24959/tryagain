#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include<iostream>
using namespace std;

TEST_CASE("valid normal input") {
    int age = 42;
    REQUIRE(age == 42);
}

TEST_CASE("valid lower boundary") {
    int age = 1;
    REQUIRE(age == 1);
}

TEST_CASE("valid upper boundary") {
    int age = 120;
    REQUIRE(age == 120);
}

TEST_CASE("valid multiple values") {
    int ages[] = {10, 25, 50, 100};
    REQUIRE(ages[0] == 10);
    REQUIRE(ages[1] == 25);
    REQUIRE(ages[2] == 50);
    REQUIRE(ages[3] == 100);
}

TEST_CASE("valid negative value") {
    int age = -5;
    REQUIRE(age < 0);
}