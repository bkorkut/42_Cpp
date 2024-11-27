/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:20:39 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 11:16:24 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

// # include "Bureaucrat.hpp"
class Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeSign;
		const int			gradeExec;
		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	public:
							Form();
							Form(const Form &);
		Form				&operator=(const Form &);
							~Form();
		const std::string	&getName(void) const;
		const std::string	getSign() const;
		int					getGradeSign(void) const;
		int 				getGradeExec() const;
		void				beSigned(const Bureaucrat &);
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
