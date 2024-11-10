/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:10:27 by bkorkut           #+#    #+#             */
/*   Updated: 2024/11/10 21:19:11 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* c = new Dog();
	const Animal* d = new Cat();

	// const Cat *c = dynamic_cast<const Cat*>(d);
	// c->getBrain().setIdea("");

	c->makeSound();
	d->makeSound();

	Cat c2;
	Cat c3(c2);
	std::cout << "c2 " << c2.getBrain().getIdea(0) << std::endl;
	std::cout << "c3 " << c3.getBrain().getIdea(0) << std::endl;
	Cat c4;
	c2.getBrain().setIdea("Nya", 0);
	c4 = c2;
	std::cout << "c2 " << c2.getBrain().getIdea(0) << std::endl;
	std::cout << "c3 " << c3.getBrain().getIdea(0) << std::endl;
	std::cout << "c4 " << c4.getBrain().getIdea(0) << std::endl;
	c3.getBrain().setIdea("Hey", 0);
	c4.getBrain().setIdea("Maw", 0);
	std::cout << "c2 " << c2.getBrain().getIdea(0) << std::endl;
	std::cout << "c3 " << c3.getBrain().getIdea(0) << std::endl;
	std::cout << "c4 " << c4.getBrain().getIdea(0) << std::endl;
	delete c;
	delete d;
	std::cout << c4.getBrain().getIdea(0) << std::endl;
	return 0;

	// add scope to destroy c2 manually then prove that c4 still prints or sumthin
}
