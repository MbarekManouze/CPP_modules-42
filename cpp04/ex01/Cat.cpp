/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:53:22 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:14:34 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout<<"Cat Default Constructor Called"<<std::endl;
    this->brain = NULL;
    this->brain = new Brain();
}

Cat::~Cat(){
    std::cout<<"Cat Default Destructor Called"<<std::endl;
    if (this->brain)
        delete this->brain;
}

Cat::Cat(Cat const &object){
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->brain = NULL;
    this->operator=(object);
}

Cat &Cat::operator=(Cat const &object){
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

void Cat::makeSound()const{
    std::cout<<"myaaaaw myaaaaw"<<std::endl;
}