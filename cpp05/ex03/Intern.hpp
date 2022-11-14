/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:07:31 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 11:53:58 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
// class From;

class Intern{
    private:
        std::string name;
        std::string target;
    public:
        Intern();
        ~Intern();
        Intern(std::string name ,std::string target);
        Intern(Intern const & object);
        Intern &operator=(Intern const &object);
        Form *makeForm(std::string name ,std::string target);
        class ClassDoesNotExist : public std::exception{
            public :
                const char * what()const throw();
        };
};

#endif