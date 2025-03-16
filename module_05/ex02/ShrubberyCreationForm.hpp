/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:32:58 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 16:25:43 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	private:
		std::string	target;
	public:
								ShrubberyCreationForm();
								ShrubberyCreationForm(const ShrubberyCreationForm &);
								ShrubberyCreationForm(const std::string);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &);
								~ShrubberyCreationForm();
		void					execute(Bureaucrat const & executor) const;
};

#endif
