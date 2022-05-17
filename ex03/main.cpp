/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:46:37 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/17 15:33:18 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a;
	Point	b(13, 10);
	Point	c(0, 10);
	Point	p(2, 5);

	std::cout << "point a = " << a << std::endl;
	std::cout << "point b = " << b << std::endl;
	std::cout << "point c = " << c << std::endl;
	std::cout << "point p = " << p << std::endl;
	std::cout << "point p = is inside the triangle = \n" << bsp(a,b,c,p) << std::endl;
	return (0);
}
