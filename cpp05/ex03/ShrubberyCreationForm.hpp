/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:18:42 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/13 14:24:01 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
    private :
        std::string target;
    public :
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &object);
        ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &object);
        void execute(Bureaucrat const & executor) const;
};


#endif