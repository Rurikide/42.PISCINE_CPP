/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshimoda <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:06:22 by tshimoda          #+#    #+#             */
/*   Updated: 2022/07/03 14:22:16 by tshimoda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
#define AWESOME_HPP

class Awesome {

	private:
		int _n;

	public:
		Awesome(void): _n(0) {}
		Awesome( int n): _n( n ) {}
		Awesome & operator=(Awesome & a){_n =a._n; return *this;}
		bool operator==( Awesome const & rhs) const { return (this->_n == rhs._n);}
		bool operator!=( Awesome const & rhs) const { return (this->_n != rhs._n);}
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n);}
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n);}
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n);}
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n);}

		int	get_n() const {return _n;}


};

std::ostream & operator<<(std::ostream& o, const Awesome &a)
{
	o << a.get_n();

	return o;
}

#endif
