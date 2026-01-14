//
// Created by tjooris on 1/13/26.
//

#ifndef CPP_MODULE_07_ITER_HPP
#define CPP_MODULE_07_ITER_HPP

#include <iostream>

template <typename T>
void    printElement(T &element)
{
    std::cout << element << std::endl;
}

template <typename T>
void    iter(T *array, const size_t length, void (*func)(T &))
{
	for (size_t i = 0; i < length; i++)
        func(array[i]);
}

template <typename T>
void    iter(T *array, const size_t length, void (*func)(const T &))
{
	for (size_t i = 0; i < length; i++)
        func(array[i]);
}

#endif //CPP_MODULE_07_ITER_HPP