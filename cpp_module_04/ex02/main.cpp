/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:27 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/12 14:35:21 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal *arr[4];

	for (int i = 0; i < 4; i++)
	{
		arr[i] = (i % 2 == 0) ? static_cast<const AAnimal *>(new Cat)
			: static_cast<const AAnimal *>(new Dog);
	}
	for (int i = 0; i < 4; i++)
	{
		arr[i]->makeSound();
		delete arr[i];
	}

	const AAnimal *c = new Cat();
	std::cout << c->getType() << std::endl;

	dynamic_cast<const Cat*>(c)->getBrain().setIdea("I don't want to set the world on fire", 0);
	std::cout << dynamic_cast<const Cat*>(c)->getBrain().getIdea(0) << std::endl;

	Cat c2;
	c2 = *(dynamic_cast<const Cat*>(c));
	std::cout << c2.getBrain().getIdea(0) << std::endl;

	delete c;
	std::cout << c2.getBrain().getIdea(0) << std::endl;
}
