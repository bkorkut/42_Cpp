/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:33:21 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 16:25:35 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
	public:
								RobotomyRequestForm();
								RobotomyRequestForm(const RobotomyRequestForm &);
								RobotomyRequestForm(const std::string);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &);
								~RobotomyRequestForm();
		void					perform() const;
};

#endif
