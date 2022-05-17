/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:28:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/05/16 15:47:28 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{

public:

	Fixed(Fixed const & input);
	Fixed(void);
	~Fixed(void);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed & operator=(Fixed const & input);

private:

	int	_value;
	static int const	_digits = 8;

};

#endif