/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:33:21 by bkorkut           #+#    #+#             */
/*   Updated: 2024/12/10 14:44:40 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm : public AForm {
	private:
		std::string	target;
		class	RobotomyFailedException : public std::exception {
			public:
				const char* what() const throw();
		};
		static bool	seeded;
	public:
							RobotomyRequestForm();
							RobotomyRequestForm(const RobotomyRequestForm &);
							RobotomyRequestForm(const std::string);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &);
							~RobotomyRequestForm();
		void				execute(Bureaucrat const & executor) const;
};

#endif
