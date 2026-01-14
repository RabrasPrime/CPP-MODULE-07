//
// Created by tjooris on 1/14/26.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
#include "doctest.h"

#include "Array.hpp"

TEST_CASE("Array default constructor")
{
    Array<int> arr;
    CHECK(arr.size() == 0);
}

TEST_CASE("Array parameterized constructor")
{
    Array<int> arr(5);
    CHECK(arr.size() == 5);
    for (unsigned int i = 0; i < arr.size(); i++)
        CHECK(arr[i] == 0);
}

TEST_CASE("Array copy constructor")
{
    Array<int> arr1(3);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    Array<int> arr2(arr1);
    CHECK(arr2.size() == 3);
    for (unsigned int i = 0; i < arr2.size(); i++)
        CHECK(arr2[i] == arr1[i]);
}

TEST_CASE("Array assignment operator")
{
    Array<int> arr1(2);
    arr1[0] = 10;
    arr1[1] = 20;

    Array<int> arr2;
    arr2 = arr1;
    CHECK(arr2.size() == 2);
    for (unsigned int i = 0; i < arr2.size(); i++)
        CHECK(arr2[i] == arr1[i]);
}

TEST_CASE("Array out of bounds access")
{
    Array<int> arr(3);
    CHECK_THROWS_AS(arr[3], std::out_of_range);
    CHECK_THROWS_AS(arr[100], std::out_of_range);
}

/*
int main() {
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); i++)
        intArray[i] = i * 10;

    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

    Array<std::string> strArray(3);
    strArray[0] = "Hello";
    strArray[1] = "World";
    strArray[2] = "!";

    for (unsigned int i = 0; i < strArray.size(); i++)
        std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;

    try {
        std::cout << strArray[3] << std::endl;
    } catch (const std::out_of_range &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}*/