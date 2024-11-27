/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:20:39 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 13:47:06 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

class	AForm
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
							AForm();
							AForm(const AForm &);
							AForm(const std::string &, int sign, int exec);
		AForm				&operator=(const AForm &);
		virtual				~AForm() = 0;
		const std::string	&getName(void) const;
		const std::string	getSign() const;
		int					getGradeSign(void) const;
		int 				getGradeExec() const;
		void				beSigned(const Bureaucrat &);
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
