#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>

void	swap( T& a, T& b )
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T&	min( const T& a, const T& b )
{
	return b <= a ? b : a;
}

template<typename T>
const T&	max( const T& a, const T& b )
{
	return b >= a ? b : a;
}

#endif
