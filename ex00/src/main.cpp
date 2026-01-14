//
// Created by tjooris on 1/13/26.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
#include "doctest.h"

#include "whatever.hpp"

TEST_CASE("swap integers")
{
    int a = 5;
    int b = 10;
    swap(a, b);
    CHECK(a == 10);
    CHECK(b == 5);
}

TEST_CASE("min and max integers")
{
    int a = 5;
    int b = 10;
    CHECK(::min(a, b) == 5);
    CHECK(::max(a, b) == 10);
}

TEST_CASE("swap strings")
{
    std::string a = "hello";
    std::string b = "world";
    swap(a, b);
    CHECK(a == "world");
    CHECK(b == "hello");
}

TEST_CASE("min and max strings")
{
    std::string a = "apple";
    std::string b = "banana";
    CHECK(::min(a, b) == "apple");
    CHECK(::max(a, b) == "banana");
}

/*
int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
*/