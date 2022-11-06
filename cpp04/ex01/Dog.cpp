/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:00:19 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/04 10:14:50 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout<<"Dog Default Constructor Called"<<std::endl;
    this->agayo = new Brain;
}

Dog::Dog(std::string type){
    (void)type;
    std::cout<<"Dog Copy Constructor Called"<<std::endl;
}

Dog::~Dog(){
    std::cout<<"Dog Deafult Destructor Caled"<<std::endl;
    delete this->agayo;
}

Dog &Dog::operator=(Dog const &object){
    this->type = object.getType();
    return (*this);
}

void Dog::makeSound()const{
    std::cout<<"wooooof woooooof"<<std::endl;
}