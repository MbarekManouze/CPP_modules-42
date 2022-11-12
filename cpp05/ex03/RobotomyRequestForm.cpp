/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:16:44 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 17:42:52 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("Tafoukt", false, 72, 45), target("STREET"){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string name ,bool Signed, int sgn_grade, int exe_grade)
:Form(name, Signed, sgn_grade, exe_grade), target("STREET"){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &object)
:Form(object.get_name(), object.get_signed(), object.get_sign_grade(), object.get_execution_grade()){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &object){
    if (this != &object)
    {
        this->target = object.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
    if (executor.getGrade() <= this->get_execution_grade() && this->get_signed())
    {
        std::cout << this->target;
        srand(time(NULL));
        if (rand() % 2)
            std::cout << " has been robotomized successfully 50\% of the time" << std::endl;
        else
            std::cout << "has Failed" << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}