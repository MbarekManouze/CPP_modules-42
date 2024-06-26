/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:53:22 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:45:21 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"){
    std::cout<<"Cat Default Constructor Called"<<std::endl;
}

Cat::Cat(Cat const &object){
    std::cout << "Cat copy constructor called" << std::endl;
    this->operator=(object);
}

Cat::~Cat(){
    std::cout<<"Cat Default Destructor Called"<<std::endl;
}

Cat &Cat::operator=(Cat const &object){
    this->type = object.getType();
    return(*this);
}

void Cat::makeSound()const{
    std::cout<<"myaaaaw myaaaaw"<<std::endl;
}

/**********************/

WrongCat::WrongCat():WrongAnimal("Cat"){
    std::cout<<"WrongCat Default Constructor Called"<<std::endl;
}

WrongCat::WrongCat(WrongCat const &object){
    std::cout << "Cat copy constructor called" << std::endl;
    this->operator=(object);
}

WrongCat::~WrongCat(){
    std::cout<<"WrongCat Default Destructor Called"<<std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const  &object){
    this->type = object.getType();
    return(*this);
}

void WrongCat::makeSound()const{
    std::cout<<"Wrong myaaaaw myaaaaw"<<std::endl;
}