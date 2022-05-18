/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:54:20 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/17 13:36:37 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_H
# define POINT_H
# include "Fixed.hpp"

class Point
{

public:

	Point(void);
	Point(float const x, float const y);
	Point(Point const & input);
	~Point(void);

	Point & operator=(Point & input);
	Point const & operator=(Point const & input);

	float	getX(void) const;
	float	getY(void) const;

private:

	Fixed const	_x;
	Fixed const	_y;

};

std::ostream & operator<<(std::ostream & o, Point const & input);

#endif