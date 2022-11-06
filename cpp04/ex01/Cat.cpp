/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:53:22 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/04 10:12:19 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout<<"Cat Default Constructor Called"<<std::endl;
    this->agayo = new Brain;
}

Cat::Cat(std::string type){
    (void)type;
    std::cout<<"Cat Copy Constructor Called"<<std::endl;
}

Cat::~Cat(){
    std::cout<<"Cat Default Destructor Called"<<std::endl;
    delete this->agayo;
}

Cat &Cat::operator=(Cat &object){
    this->type = object.getType();
    return(*this);
}

void Cat::makeSound()const{
    std::cout<<"myaaaaw myaaaaw"<<std::endl;
}