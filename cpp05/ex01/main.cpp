/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:03:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 10:59:10 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat b1("b1", 70);
	Bureaucrat b2("b2", 150);
	Form	f1("chahadat sokna", false, 100, 100);
	try{
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		b1.increment();
		f1.beSigned(b1);
		b1.signForm(f1);
		b2.decrement();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		b2.decrement();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}