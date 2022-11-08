/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:45:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:11:56 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout<<"Animal Default Constructor Called"<<std::endl;
}

Animal::Animal(std::string type){
    this->type = type;
    std::cout<<"Animal param Constructor Called"<<std::endl;
}

Animal::Animal(Animal const &object){
    std::cout << "Animal copy Constructor Called" << std::endl;
    this->operator=(object);
}

Animal::~Animal(){
    std::cout<<"Animal Default Destructor Called"<<std::endl;
}

std::string Animal::getType()const{
    return (this->type);
}

Animal &Animal::operator=(Animal const &object){
    this->type = object.type;
    return (*this);
}

void Animal::makeSound()const{
    std::cout<<"steph curry from downtown"<<std::endl;
}

/*******************/

WrongAnimal::WrongAnimal(){
std::cout<<"WrongAnimal Default Constructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
    this->type = type;
    std::cout<<"WrongAnimal param Constructor Called"<<std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout<<"WrongAnimal Default Destructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &object){
    std::cout << "Animal copy Constructor Called" << std::endl;
    this->operator=(object);
}

std::string WrongAnimal::getType()const{
    return (this->type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &object){
    this->type = object.type;
    return (*this);
}

void WrongAnimal::makeSound()const{
    std::cout<<"Wrong steph curry from downtown"<<std::endl;
}