/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:16:42 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/13 15:49:39 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        RobotomyRequestForm(RobotomyRequestForm const &object);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &object);
        void execute(Bureaucrat const & executor) const;
};


#endif