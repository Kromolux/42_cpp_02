/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:20:23 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/17 13:24:33 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//std::cout << "default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(Fixed const & input)
{
	//std::cout << "copy constructor called\n";
	this->_value = input._value;
}

Fixed::Fixed(int const input)
{
	//std::cout << "int constructor called\n";
	this->_value = input << this->_digits;
}

Fixed::Fixed(float const input)
{
	//std::cout << "float constructor called\n";
	this->_value = (int)roundf(input * (1 << this->_digits));
}

Fixed::~Fixed(void)
{
	//std::cout << "deconstructor called\n";
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits function called\n";
	this->_value = raw;
}

Fixed & Fixed::operator=(Fixed const & input)
{
	//std::cout << "assignment operator function called\n";
	this->_value = input._value;
	return (*this);
}

bool	Fixed::operator>(Fixed const & input) const
{
	if (this->_value > input._value)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & input) const
{
	if (this->_value < input._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & input) const
{
	if (this->_value >= input._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & input) const
{
	if (this->_value <= input._value)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & input) const
{
	if (this->_value == input._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & input) const
{
	if (this->_value != input._value)
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const & input) const
{
	return (Fixed(this->toFloat() + input.toFloat()));
}

Fixed Fixed::operator-(Fixed const & input) const
{
	return (Fixed(this->toFloat() - input.toFloat()));
}

Fixed Fixed::operator*(Fixed const & input) const
{
	return (Fixed(this->toFloat() * input.toFloat()));
}

Fixed Fixed::operator/(Fixed const & input) const
{
	return (Fixed(this->toFloat() / input.toFloat()));
}

Fixed	Fixed::operator++(void)
{
	++(this->_value);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++(this->_value);
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	--(this->_value);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--(this->_value);
	return (tmp);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_digits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_digits);
}

Fixed & Fixed::min(Fixed & input1, Fixed & input2)
{
	if (input1._value < input2._value)
		return (input1);
	return (input2);
}

Fixed const & Fixed::min(Fixed const & input1, Fixed const & input2)
{
	if (input1._value < input2._value)
		return (input1);
	return (input2);
}

Fixed & Fixed::max(Fixed & input1, Fixed & input2)
{
	if (input1._value < input2._value)
		return (input2);
	return (input1);
}

Fixed const & Fixed::max(Fixed const & input1, Fixed const & input2)
{
	if (input1._value < input2._value)
		return (input2);
	return (input1);
}

std::ostream & operator<<(std::ostream & o, Fixed const & input)
{
	o << input.toFloat();
	return (o);
}
