/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:55:08 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/31 16:41:58 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					fixed;
		static const int	fractional_bits = 8;
	public:
				Fixed(void);
				Fixed(const Fixed &);
				Fixed(const int);
				Fixed(const float);
		Fixed	&operator=(const Fixed &);
				~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		void	operator>(void);
		void	operator<(void);
		void	operator>=(void);
		void	operator<=(void);
		void	operator==(void);
		void	operator!=(void);
		void	operator+(void);
		void	operator-(void);
		void	operator*(void);
		void	operator/(void);
		Fixed	&operator++(void);
		Fixed	operator++(int);
		void	operator--(void);
		void	operator--(void);
};

std::ostream& operator<<(std::ostream &os, const Fixed &obj);

#endif
