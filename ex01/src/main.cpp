//
// Created by tjooris on 1/13/26.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
#include "doctest.h"
#include "iter.hpp"

TEST_CASE("iter")
{
	int	test[5] = {1, 7, 8, 5, 6};
	int const test2[5] = {5, 4, 3, 2, 1};

	iter(test, 5, printElement<int>);
	iter(test2, 5, printElement<int const>);
}

TEST_CASE("iter with std::string")
{
	std::string strArray[] = {"hello", "world", "test"};
	size_t strLength = sizeof(strArray) / sizeof(strArray[0]);
	iter(strArray, strLength, printElement<std::string>);
}

TEST_CASE("iter with char")
{
	char charArray[] = {'a', 'b', 'c', 'd'};
	size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
	iter(charArray, charLength, printElement<char>);
}

TEST_CASE("test const")
{
	const int constArray[] = {10, 20, 30, 40, 50};
	size_t constLength = sizeof(constArray) / sizeof(constArray[0]);
	iter(constArray, constLength, printElement<const int>);
}

/*
int main() {
	int intArray[] = {10, 20, 30, 40, 50};
	size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, intLength, printElement);

	std::string strArray[] = {"foo", "bar", "baz"};
	size_t strLength = sizeof(strArray) / sizeof(strArray[0]);
	iter(strArray, strLength, printElement);

	char charArray[] = {'A', 'B', 'C', 'D'};
	size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
	iter(charArray, charLength, printElement);
	return 0;
}
*/