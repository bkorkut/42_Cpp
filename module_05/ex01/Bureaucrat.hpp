/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:34:09 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/27 11:23:01 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <stdexcept>

class Form;

class	Bureaucrat {
	private:
		const std::string	name;
		int					grade;
		class	GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
	public:
							Bureaucrat(void);
							Bureaucrat(const Bureaucrat &);
							Bureaucrat(const std::string &, int);
							~Bureaucrat(void);
		const std::string	&getName(void) const;
		int					getGrade() const;
		Bureaucrat			&operator=(const Bureaucrat &);
		Bureaucrat			&operator++(void);
		Bureaucrat			operator++(int);
		Bureaucrat			&operator--(void);
		Bureaucrat			operator--(int);
		Bureaucrat			&operator+=(int);
		Bureaucrat			&operator-=(int);
		void				signForm(Form &);
};

std::ostream &operator<<(std::ostream &, const Bureaucrat &);

#endif
