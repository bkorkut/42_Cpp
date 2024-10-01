/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:56:54 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/01 15:26:29 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

using std::string;

class	Contact
{
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
	public:
		void	set_first_name(string first_name);
		void	set_last_name(string last_name);
		void	set_nickname(string nickname);
		void	set_phone_number(string phone_number);
		void	set_darkest_secret(string darkest_secret);
		string	get_first_name(void);
		string	get_last_name(void);
		string	get_nickname(void);
		string	get_phone_number(void);
		string	get_darkest_secret(void);
};
