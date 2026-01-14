//
// Created by tjooris on 1/13/26.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
#include "doctest.h"
#include "iter.hpp"

TEST_CASE("iter with integers")
{
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);

	std::ostringstream oss;
	std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
	std::cout.rdbuf(oss.rdbuf());

	iter(array, length, printElement);
	std::cout.rdbuf(oldCoutStreamBuf);
	std::string expectedOutput = "1\n2\n3\n4\n5\n";

	CHECK(oss.str() == expectedOutput);
}

TEST_CASE("iter with strings")
{
	std::string array[] = {"hello", "world", "test"};
	size_t length = sizeof(array) / sizeof(array[0]);

	std::ostringstream oss;
	std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();
	std::cout.rdbuf(oss.rdbuf());

	iter(array, length, printElement);
	std::cout.rdbuf(oldCoutStreamBuf);
	std::string expectedOutput = "hello\nworld\ntest\n";

	CHECK(oss.str() == expectedOutput);
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
}*/