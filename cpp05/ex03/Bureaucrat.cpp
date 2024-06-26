/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:12:57 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 12:50:15 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():name("tafoukt"){
    this->Grade = 150;
    if (Grade < 1)
        throw GradeTooHighException();
    if (Grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Sir rah salina lkhdma db!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int Grade):name(name),Grade(Grade){
    std::cout << "Bureaucrat param constructor called" << std::endl;
    if (this->Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &object):name(object.getName()){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    this->operator=(object);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &object){
    if (this != &object){
        this->Grade = object.Grade;
    }
    return (*this);
}

std::string Bureaucrat::getName()const{
    return (this->name);
}

int Bureaucrat::getGrade()const{
    return (this->Grade);
}

void Bureaucrat::decrement(){
    this->Grade++;
    if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::increment(){
    this->Grade--;
    if (this->Grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &object){
    out << object.getName() << ", bureaucrat grade " << object.getGrade();
    return out;
}

void Bureaucrat::signForm(Form const &object){
    if (object.get_signed())
        std::cout << "Bureaucrat "<< this->name << " signed Form " << object.get_name() << std::endl;
    else
        std::cout << "Bureaucrat "<< this->name << " couldn’t sign Form " \
        << object.get_name() << " because the grade is too low" << std::endl; 
}

void Bureaucrat::executeForm(Form const &form){
    if (form.get_signed())
    {
        form.execute(*this);
        std::cout << this->name << " executed " << form.get_name() << std::endl;
    }
    else
        std::cout << this->name << " couldn't execute "<< form.get_name() << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade is too low");
}