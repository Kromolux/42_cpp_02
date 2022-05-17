/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:20:53 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/17 11:28:20 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{

public:

	Fixed(void);
	Fixed(Fixed const & input);
	Fixed(int const input);
	Fixed(float const input);
	~Fixed(void);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed &	operator=(Fixed const & input);
	
	bool	operator>(Fixed const & input) const;
	bool	operator<(Fixed const & input) const;
	bool	operator>=(Fixed const & input) const;
	bool	operator<=(Fixed const & input) const;
	bool	operator==(Fixed const & input) const;
	bool	operator!=(Fixed const & input) const;
	
	Fixed	operator+(Fixed const & input) const;
	Fixed	operator-(Fixed const & input) const;
	Fixed	operator*(Fixed const & input) const;
	Fixed	operator/(Fixed const & input) const;

	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);
	
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed & min(Fixed & input1, Fixed & input2);
	static Fixed const & min(Fixed const & input1, Fixed const & input2);
	static Fixed & max(Fixed & input1, Fixed & input2);
	static Fixed const & max(Fixed const & input1, Fixed const & input2);

private:

	int					_value;
	static int const	_digits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & input);

#endif
