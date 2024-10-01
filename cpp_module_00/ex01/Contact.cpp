/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:37:55 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/01 15:26:16 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(string first_name)
{
	this->first_name = first_name;
}

void	Contact::set_last_name(string last_name)
{
	this->last_name = last_name;
}

void	Contact::set_nickname(string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phone_number(string phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::set_darkest_secret(string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

string	Contact::get_first_name(void)
{
	return (this->first_name);
}

string	Contact::get_last_name(void)
{
	return (this->last_name);
}

string	Contact::get_nickname(void)
{
	return (this->nickname);
}

string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
