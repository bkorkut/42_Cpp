/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:55:08 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/30 17:10:34 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	private:
		int					fixed;
		static const int	fractional_bits = 8;
	public:
				Fixed(void);
				Fixed(const Fixed &);
				Fixed &operator=(const Fixed &);
				~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
