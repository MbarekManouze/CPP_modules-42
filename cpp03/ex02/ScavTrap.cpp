/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:05:11 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/06 10:53:32 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<<"ScavTrap Default Constructor Called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout<<"ScavTrap "<<name<<" Copy ScavTrap Called"<<std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap "<<this->name<<" Destructor Called"<<std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap &object){
    this->Attack_damage = object.Attack_damage;
    this->Energy_points = object.Energy_points;
    this->Hit_points = object.Hit_points;
    this->name = object.name;
    return (*this);
}

void ScavTrap::attack(const std::string &target){
    std::cout<<"ScavTrap "<<name;
    if (this->Energy_points > 0)
    {
        std::cout<<" attacks "<<target<<" ,causing "<<Attack_damage<<" points of damage!"<<std::endl;
        this->Energy_points--;
    }
    else
        std::cout<<" can't attack "<<target<<std::endl;
}

void ScavTrap::guardGate(){
    std::cout<<"ScavTrap is now in Gate keeper mode."<<std::endl;
}