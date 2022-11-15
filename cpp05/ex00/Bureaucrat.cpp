/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:12:57 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/15 19:28:02 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Vegar"),Grade(150){
    std::cout << "Bureaucrat default constructor called" << std::endl;
    if (Grade <  1)
        throw GradeTooHighException();
    if (Grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int Grade):name(name),Grade(Grade){
    std::cout << "Bureaucrat param constructor called" << std::endl;
    if (this->Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &object):name(object.getName()){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    this->operator=(object);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &object){
    std::cout << "Bureaucrat Assignment operator Called" << std::endl;
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

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade is too low");
}