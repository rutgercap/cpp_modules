#pragma once

#include <cstddef>
#include <iostream>

template <class T>
void iter(T *a, std::size_t len, void(func)(T)) {

	for (std::size_t i = 0; i < len; i++) {
		func(a[i]);
	}
}

template<typename T>
void	printValue(T value){
	std::cout << value << std::endl;
}
