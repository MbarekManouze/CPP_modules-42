/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:00:19 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:11:39 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout<<"Dog Default Constructor Called"<<std::endl;
}

Dog::Dog(Dog const &object){
    std::cout << "Dog Copy constructor called" << std::endl;
    this->operator=(object);
}

Dog::~Dog(){
    std::cout<<"Dog Deafult Destructor Caled"<<std::endl;
}

Dog &Dog::operator=(Dog const &object){
    this->type = object.getType();
    return (*this);
}

void Dog::makeSound()const{
    std::cout<<"wooooof woooooof"<<std::endl;
}