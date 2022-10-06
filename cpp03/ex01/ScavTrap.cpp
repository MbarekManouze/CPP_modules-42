/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:05:11 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/04 18:07:38 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(){
    // std::cout<<"Default Constructor Called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name):name(name),H_P(100),E_P(50),A_D(20){
    std::cout<<name<<" Copy ScavTrap Called"<<std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<<this->name<<" ScavTrap Destructor Called"<<std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap &object){
    this->A_D = object.A_D;
    this->E_P = object.E_P;
    this->H_P = object.H_P;
    this->name = object.name;
    return (*this);
}

void ScavTrap::attack(const std::string &target){
    std::cout<<"ScavTrap "<<name;
    if (this->E_P > 0)
    {
        std::cout<<" attacks "<<target<<" ,causing "<<A_D<<" points of damage!"<<std::endl;
        this->E_P--;
    }
    else
        std::cout<<" can't attack "<<target<<std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
    std::cout<<"ScavTrap "<<name;
    if (H_P > 0)
    {
        this->H_P += amount;
        std::cout<<" Repaired amount of "<<amount<<" ,now has "<<H_P<<" health"<<std::endl;
    }
    else
        std::cout<<" Already DEAD, can't Repaired none"<<std::endl;

}

void ScavTrap::takeDamage(unsigned int amount){
    std::cout<<"ClapTrap "<<name;
    if (amount > this->H_P)
    {
        std::cout<<" takes damage of "<<amount<<" and DIES"<<std::endl;
        this->E_P = 0;
        this->H_P = 0;
    }
    else{
        this->H_P -= amount;
        std::cout<<" takes damage of "<<amount<<" ,only "<<this->H_P<<" remaining"<<std::endl;
    }
}

void ScavTrap::guardGate(){
    std::cout<<"ScavTrap is now in Gate keeper mode."<<std::endl;
}