/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:02:44 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/03 18:03:31 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <stdexcept>
#include "AForm.hpp"

class	Intern {
	private:
		std::string	classes[3];
		class	NoSuchClassException : public std::exception {
			public:
				const char*	what() const throw();
		};
	public:
				Intern();
				Intern(const Intern &);
				~Intern();
		Intern	&operator=(const Intern &);
		AForm	*makeForm(std::string name, std::string target);
};

#endif
