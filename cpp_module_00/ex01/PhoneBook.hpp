/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:38:27 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/10 15:31:12 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		char	index;
		void	add_first_name(void);
		void	add_last_name(void);
		void	add_nickname(void);
		void	add_phone_number(void);
		void	add_darkest_secret(void);
		void	display_contact_list(void) const;
		void	display_single_contact(char index) const;
	public:
		PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void) const;
};

#endif
