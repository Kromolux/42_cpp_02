/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:18:33 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/17 11:28:53 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed		c(42.42f);
	
	std::cout << "a   = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a   = " << a << std::endl;
	
	std::cout << "max(a,b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a,b) = " << Fixed::min( a, b ) << std::endl;
	
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "b   = " << b << std::endl;

	std::cout << "max(a,b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a,b) = " << Fixed::min( a, b ) << std::endl;
	
	std::cout << "c   = " << c << std::endl;
	std::cout << "c * 1.5f = " << c * 1.5f << std::endl;
	
	std::cout << "b / 2.2f = " << b / 2.2f << std::endl;
	a = 7.25f;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a + 5.5f = " << a + 5.5f << std::endl;
	std::cout << "a - 5.5f = " << a - 5.5f << std::endl;
	//std::cout << "a - 5.5f = " << a - 5.5f << std::endl;
	return (0);
}
