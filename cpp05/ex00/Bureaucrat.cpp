/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:12:57 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/10 12:36:03 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Bureaucrat default constructor called" << std::endl;
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

Bureaucrat::Bureaucrat(Bureaucrat const &object){
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
    std::cout << "insertion operator Called" << std::endl;
    out << object.getName() << ", bureaucrat grade " << object.getGrade();
    return out;
}