/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:00:19 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/08 20:56:10 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout<<"Dog Default Constructor Called"<<std::endl;
}

Dog::Dog(std::string type){
    std::cout<<"Dog Copy Constructor Called"<<std::endl;
}

Dog::~Dog(){
    std::cout<<"Dog Deafult Destructor Caled"<<std::endl;
}

Dog &Dog::operator=(Dog &object){
    this->type = object.getType();
    return (*this);
}

void Dog::makeSound()const{
    std::cout<<"wooooof woooooof"<<std::endl;
}