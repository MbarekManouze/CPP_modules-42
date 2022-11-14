/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:03:50 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 15:01:12 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>


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
                const char * what()const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                const char * what()const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &object);

#endif