/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:30:27 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 15:41:52 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(Fixed const & input)
{
	std::cout << "copy constructor called\n";
	this->_value = input.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "deconstructor called\n";
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called\n";
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called\n";
	this->_value = raw;
}

Fixed & Fixed::operator=(Fixed const & input)
{
	std::cout << "assignment operator function called\n";
	this->_value = input.getRawBits();
	return (*this);
}
