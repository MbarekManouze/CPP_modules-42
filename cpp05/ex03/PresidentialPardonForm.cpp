/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:42 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 11:59:03 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("tafoukt", false, 145, 137),target("Tafoukt"){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
:target(name){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &object)
:Form(object.get_name(), object.get_signed(), object.get_sign_grade(), object.get_execution_grade()){
    this->operator=(object);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &object){
    if(this != &object){
        this->target = object.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const{
    if (executor.getGrade() <= this->get_execution_grade()){
        if (this->get_signed())
            std::cout <<this->target << "has benn pardoned by Zaphod Beeblebrox" << std::endl;
        else
            std::cout << "couldn't execute because it isn't signed" << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}