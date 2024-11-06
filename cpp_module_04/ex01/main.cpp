/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:27 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/06 15:50:29 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j; //should not create a leak
	delete i;



	return 0;
}
