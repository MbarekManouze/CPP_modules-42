/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:45:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:27:58 by mmanouze         ###   ########.fr       */
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

Animal::Animal(Animal const &object){
    std::cout  << "Animal Copy Constructor Called" <<std::endl;
    this->operator=(object);
}

Animal &Animal::operator=(Animal const &object){
    this->type = object.type;
    return (*this);
}

void Animal::makeSound()const{
    std::cout << "" << std::endl;
}

std::string Animal::getType()const{
    return (this->type);
}
