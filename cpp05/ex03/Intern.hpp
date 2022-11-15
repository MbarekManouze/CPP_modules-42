/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:07:31 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/15 20:40:33 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern{
    public:
        Intern();
        ~Intern();
        Intern(Intern const & object);
        Intern &operator=(Intern const &object);
        Form *makeForm(std::string name ,std::string target);
        class ClassDoesNotExist : public std::exception{
            public :
                const char * what()const throw();
        };
};

#endif