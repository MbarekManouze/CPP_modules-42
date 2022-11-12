/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:03:50 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 15:25:02 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat;
class Form;

class Bureaucrat{
    private:
        const std::string name;
        int Grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const std::string &name, int Grade);
        Bureaucrat(Bureaucrat const &object);
        Bureaucrat &operator=(Bureaucrat const &object);
        std::string getName()const;
        int getGrade()const;
        void increment();
        void decrement();
        class GradeTooHighException : public std::exception{
            public :
                const char * what()const _NOEXCEPT{
                    return("Grade is too high");
                }
        };
        class GradeTooLowException : public std::exception{
            public :
                const char * what()const _NOEXCEPT{
                    return("Grade is too low");
                }
        };
        void signForm(Form const &object);
        void executeForm(Form const & form); 
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &object);

#endif