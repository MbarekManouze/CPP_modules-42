/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:45:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/08 20:52:37 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout<<"Animal Default Constructor Called"<<std::endl;
}

Animal::Animal(std::string type){
    this->type = type;
    std::cout<<"Animal Copy Constructor Called"<<std::endl;
}

Animal::~Animal(){
    std::cout<<"Animal Default Destructor Called"<<std::endl;
}

std::string Animal::getType()const{
    // std::cout<<"done";
    return (this->type);
}

Animal &Animal::operator=(Animal &object){
    this->type = object.type;
    return (*this);
}