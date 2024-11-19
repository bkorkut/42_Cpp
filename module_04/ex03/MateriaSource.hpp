/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:13:40 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/19 14:50:03 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
					MateriaSource();
					MateriaSource(const MateriaSource &);
	MateriaSource&	operator=(const MateriaSource &);
					~MateriaSource();
	void			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const & type);
};

#endif
