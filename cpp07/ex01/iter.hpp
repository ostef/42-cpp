#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>

template<typename T>
void iter(T *array, size_t count, void (*func) (T &elem, size_t index))
{
	for (size_t i = 0; i < count; i += 1)
		func (array[i], i);
}

#endif
