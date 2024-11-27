/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:34:10 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 14:40:56 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
								PresidentialPardonForm();
								PresidentialPardonForm(const PresidentialPardonForm &);
								PresidentialPardonForm(const std::string);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &);
								~PresidentialPardonForm();
};

#endif
