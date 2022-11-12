/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:10:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 22:39:16 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(std::string name ,std::string target):name(target),name(name){}

Intern::Intern(Intern const &object){
    this->operator=(object);
}

Intern &Intern::operator=(Intern const &object){
    if (this != &object)
    {
        this->name = object.name;
        this->target = object.target; 
    }
    return (*this);
}

void Intern::makeForm(std::string name, std::string target){
    
}