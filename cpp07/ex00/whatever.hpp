#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &first, T &second)
{
	T temp = first;
	first = second;
	second = first;
}

template<typename T>
const T &min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
const T &max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
