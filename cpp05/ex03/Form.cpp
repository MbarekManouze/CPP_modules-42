/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:25:07 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 15:13:35 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():name("tafoukt"),Signed(false),sign_grade(150),execute_grade(150){
    std::cout << "Form default constructor called" << std::endl;
    if (this->sign_grade < 1 || this->execute_grade < 1)
        throw GradeTooHighException();
    if (this->execute_grade > 150 || this->sign_grade > 150)
        throw GradeTooLowException();
}

Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}

Form::Form(std::string name, bool sgn,int sign_g, int exec_g):name(name),Signed(sgn),sign_grade(sign_g),execute_grade(exec_g){
    std::cout << "Form copy constructor called" << std::endl;
    if (this->sign_grade < 1 || this->execute_grade < 1)
        throw GradeTooHighException();
    if (this->execute_grade > 150 || this->sign_grade > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &object):name(object.name),Signed(object.Signed),sign_grade(object.sign_grade),execute_grade(object.execute_grade){
    std::cout << "Form copy constructor called" << std::endl;
    this->operator=(object);
}

Form &Form::operator=(Form const &object){
    if (this != &object){
        this->Signed = object.Signed;
    }
    return (*this);
}

std::string Form::get_name()const{
    return (this->name);
}

bool Form::get_signed()const{
    return (this->Signed);
}

int Form::get_sign_grade()const{
    return (this->sign_grade);
}

int Form::get_execution_grade()const{
    return (this->execute_grade);
}

void Form::beSigned(Bureaucrat const &object){
    if(object.getGrade() <= this->get_sign_grade())
        this->Signed = true;
    else
    {
        this->Signed = false;
        throw Bureaucrat::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &os, Form const &object){
    os <<"name : " <<object.get_name() << "\nSigned : "<< object.get_signed() << "\nsign_garde : " \
    << object.get_sign_grade() << "\nexecute_grade : " << object.get_execution_grade();
    return (os);
}

const char * Form::GradeTooHighException::what() const throw(){
    return ("grade is too HIGH");
}

const char * Form::GradeTooLowException::what() const throw(){
    return ("grade is too LOW");
}