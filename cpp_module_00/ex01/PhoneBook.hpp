/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:38:27 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/01 17:32:20 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
		Contact	contacts[8];
		char	index;
		void	add_first_name(void);
		void	add_last_name(void);
		void	add_nickname(void);
		void	add_phone_number(void);
		void	add_darkest_secret(void);
	public:
		void	add_contact(void);
		void	search_contact(void);
		void	increment_index(void);
};
