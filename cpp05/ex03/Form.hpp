/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:11:45 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 16:59:03 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class Form;

class Form{
    private :
        const std::string name;
        bool Signed;
        const int sign_grade;
        const  int execute_grade;
    public :
        Form();
        ~Form();
        Form(std::string name,bool sgn ,int sign_g, int exec_g);
        Form(Form const &object);
        Form &operator=(Form const &object);
        std::string get_name()const;
        bool get_signed()const;
        int get_sign_grade()const;
        int get_execution_grade()const;
        void beSigned(Bureaucrat const &object);
        class GradeTooHighException : public std::exception{
            public :
                const char * what()const _NOEXCEPT{
                    return ("grade is too HIGH");
                }
        };
        class GradeTooLowException : public std::exception{
            public :
                const char * what()const _NOEXCEPT{
                    return ("grade is too LOW");
                }
        };
        void virtual execute(Bureaucrat const & executor)const = 0;
};

std::ostream &operator<<(std::ostream &os, Form const &object);

#endif