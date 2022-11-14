/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:14:40 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/13 14:23:25 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTiALPARDONFORM_HPP
#define PRESIDENTiALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &object);
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &object);
        void execute(Bureaucrat const & executor) const;
};

#endif