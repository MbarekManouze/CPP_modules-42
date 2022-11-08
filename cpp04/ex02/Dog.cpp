/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:00:19 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:27:38 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"){
    std::cout<<"Dog Default Constructor Called"<<std::endl;
    this->brain = NULL;
    this->brain = new Brain();
}

Dog::~Dog(){
    std::cout<<"Dog Deafult Destructor Caled"<<std::endl;
    if (this->brain)
        delete this->brain;
}

Dog::Dog(Dog const &object){
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->brain = NULL;
    this->operator=(object);
}

Dog &Dog::operator=(Dog const &object){
    std::cout << "Copy assignement operator Called" << std::endl;
    if(this != &object)
    {
        this->type = object.getType();
        if (!this->brain)
        {
            this->brain = new Brain();
            *(this->brain) = *(object.brain);
        }
        else
        {
            *(this->brain) = *(object.brain);
        }
    }
    return (*this);
}

void Dog::makeSound()const{
    std::cout<<"wooooof woooooof"<<std::endl;
}