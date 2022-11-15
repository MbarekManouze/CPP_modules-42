/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:10:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/15 20:40:57 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(Intern const &object){
    this->operator=(object);
}

Intern &Intern::operator=(Intern const &object){
    (void)object;
    return (*this);
}

const char * Intern::ClassDoesNotExist::what() const throw(){
    return ("NO SUCH CLASS NAME");
}

Form *Intern::makeForm(std::string name, std::string target){

    Form *formidable = NULL;

    std::string array[3] = {"Presidential PardonForm","Shrubbery CreationForm", "Robotomy RequestForm"};
    int i;
    for(i = 0; i < 3; i++)
        if (array[i] == name)
            break;
    switch (i)
    {
    case 0:
        formidable = new PresidentialPardonForm(target);
        break;
    case 1:
        formidable = new ShrubberyCreationForm(target);
        break;
    case 2:
        formidable = new RobotomyRequestForm(target);
        break;
    default:
        std::cout << "name passed as a parameter does not exist" << std::endl;
        throw ClassDoesNotExist();
        break;
    }
    if (formidable)
        std::cout << "Intern creates form : " << formidable->get_name() << std::endl;
    return (formidable);
}