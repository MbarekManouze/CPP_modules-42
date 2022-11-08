/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:46:42 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 12:10:31 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor Called" <<std::endl;
}

Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std:: endl;
}

Brain::Brain(Brain const &object){
    std::cout << "Brain Copy Constructor called" << std::endl;
    this->operator=(object);
}

Brain &Brain::operator=(Brain const &object){
    std::cout << "Copy assignement operator Called" << std::endl;
    if (this != &object)
    {
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = object.ideas[i];
            i++;
        }
    }
    return (*this);
}