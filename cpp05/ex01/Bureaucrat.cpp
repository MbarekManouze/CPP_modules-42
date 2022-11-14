/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:12:57 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 15:08:55 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():name("tafoukt"){
    std::cout << "Bureaucrat default constructor called" << std::endl;
    this->Grade = 150;   
     if (Grade <  1)
        throw GradeTooHighException();
    if (Grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Sir rah salina lkhdma db!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int Grade):name(name),Grade(Grade){
    if (this->Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &object):name(object.getName()){
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
        << object.get_name() << " cause it does not have permission" << std::endl; 
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return ("grade is too HIGH");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return ("grade is too LOW");
}