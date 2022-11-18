/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:03:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/17 13:20:59 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


void ft_ok()
{
	Intern someRandomIntern;
	Form* rrf = NULL;
	try
	{
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "tree");
		Bureaucrat beru("GOT",4);
		rrf->beSigned(beru);
		rrf->execute(beru);
		delete rrf;
		rrf = NULL;
	}
	catch(std::exception &e)
	{
		if (rrf)
			delete rrf;
		std::cout << e.what() << std::endl;
	}

}

int     main(void)
{
	ft_ok();
	return (0);
}
