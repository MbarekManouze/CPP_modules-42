/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:19:30 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 12:04:55 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("Tafoukt", false, 25, 5), target("tree"){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &object)
:Form(object.get_name(), object.get_signed(), object.get_sign_grade(), object.get_execution_grade()){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
:target(name){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &object){
    if (this != &object)
    {
        this->target = object.target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const{

    if (executor.getGrade() <= this->get_execution_grade())
    {
        if (this->get_signed())
        {
            std::string line;
            std::string outfile;
            outfile = this->target + "_shrubbery";
            std::ifstream   inpt(this->target);
            std::ofstream   out(outfile);

            if (inpt && out){
                while (getline(inpt, line))
                    out << line << "\n";
            }
            else
                std::cout << "Error in opening files" << std::endl;
        }
        else
            std::cout << "couldn't execute because it isn't signed" << std::endl;
    }
    else
        throw GradeTooLowException();
}