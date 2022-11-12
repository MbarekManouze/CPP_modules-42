/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:19:30 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 17:55:49 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("Tafoukt", false, 25, 5), target("tree"){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object)
:Form(object.get_name(), object.get_signed(), object.get_sign_grade(), object.get_execution_grade()), target("HOME"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name ,bool Signed, int sgn_grade, int exe_grade)
:Form(name, Signed,sgn_grade, exe_grade){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &object){
    if (this != &object)
    {
        this->target = object.target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const{

    if (executor.getGrade() <= this->get_execution_grade() && this->get_signed())
    {
        std::string line;
        std::ifstream   inpt(this->target);
        std::ofstream   out("tree.file");

        if (inpt && out){
            while (getline(inpt, line))
                out << line << "\n";
        }
    }
    else
        throw GradeTooLowException();
}