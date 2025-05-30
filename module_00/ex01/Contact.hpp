/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:56:54 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/17 18:12:55 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

using std::string;

class	Contact
{
	private:
		std::string			first_name;
		std::string			last_name;
		std::string			nickname;
		std::string			phone_number;
		std::string			darkest_secret;
	public:
		void				set_first_name(std::string first_name);
		void				set_last_name(std::string last_name);
		void				set_nickname(std::string nickname);
		void				set_phone_number(std::string phone_number);
		void				set_darkest_secret(std::string darkest_secret);
		const std::string	&get_first_name(void) const;
		const std::string	&get_last_name(void) const;
		const std::string	&get_nickname(void) const;
		const std::string	&get_phone_number(void) const;
		const std::string	&get_darkest_secret(void) const;
};

#endif
