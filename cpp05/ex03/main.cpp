/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:03:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 17:58:51 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int     main(void)
{
	try{

		Bureaucrat beru("Tafoukt", 6);
		ShrubberyCreationForm form;
		RobotomyRequestForm robot;

		robot.beSigned(beru);
		form.beSigned(beru);
		form.execute(beru);
		robot.execute(beru);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

        // Bureaucrat b1("Si benani", 72);
        // Bureaucrat b2("b2", 15);
        // // ShrubberyCreationForm scf;
        // RobotomyRequestForm rrf;
        // PresidentialPardonForm ppf;

        // b1.executeForm(scf);
        // b1.signForm(scf);
        // b1.executeForm(scf);
        // b2.executeForm(scf);

}
