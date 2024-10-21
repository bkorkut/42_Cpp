/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorkut <bkorkut@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:36:53 by bkorkut           #+#    #+#             */
/*   Updated: 2024/10/21 17:05:45 by bkorkut          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

/*
class	Filename
{
		std::string	filename;
	public:
		void		replace(void);
}
*/

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		// open the filename
		// open a new file
		// read filename using getline or cin?
		// for loop its content and replace s1 with s2 (filename.replace)
		//		find(s2);
		//		substr(start to find);
		//		append(s2);
		//		substr(find + s1 to end);
		// write into the nf
		// close the filename and the new file
	}
	return (0);
}
