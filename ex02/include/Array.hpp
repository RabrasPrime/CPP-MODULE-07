//
// Created by tjooris on 1/14/26.
//

#ifndef CPP_MODULE_07_ARRAY_HPP
#define CPP_MODULE_07_ARRAY_HPP

template <typename T>
class Array
{
	private:
        T*				_array;
        unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		unsigned int	size() const;
        Array &			operator=(const Array &other);
		T &				operator[](unsigned int index);
		T const &		operator[](unsigned int index) const;
};

#include "Array.tpp"

#endif //CPP_MODULE_07_ARRAY_HPP