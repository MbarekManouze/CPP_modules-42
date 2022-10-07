/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:37:22 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/04 18:05:31 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    // std::cout<<"Default Constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),Hit_points(10),Energy_points(10),Attack_damage(0){
    std::cout<<"ClapTrap "<<name<<" Copy Constructor Called"<<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<<name<<" Default Destructor Called"<<std::endl;
}

ClapTrap ClapTrap::operator=(ClapTrap &object){
    this->name = object.name;
    this->Hit_points = object.Hit_points;
    this->Energy_points = object.Energy_points;
    this->Attack_damage = object.Attack_damage;
    return (*this);    
}

void ClapTrap::attack(const std::string &target){
    std::cout<<"Claptrap "<<name;
    if (this->Energy_points > 0)
    {
        std::cout<<" attacks "<<target<<" ,causing "<<Attack_damage<<" points of damage!"<<std::endl;
        this->Energy_points--;
    }
    else
        std::cout<<" can't attack "<<target<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout<<"ClapTrap "<<name;
    if (amount > this->Hit_points)
    {
        std::cout<<"takes damage of "<<amount<<" and DIES"<<std::endl;
        this->Energy_points = 0;
        this->Hit_points = 0;
    }
    else{
        this->Energy_points -= amount;
        std::cout<<"takes damage of "<<amount<<" ,only "<<this->Energy_points<<" remaining"<<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout<<"ClapTrap "<<name;
    if (Hit_points > 0)
    {
        this->Hit_points += amount;
        std::cout<<" Repaired amount of "<<amount<<" ,now has "<<Hit_points<<" health"<<std::endl;
    }
    else
        std::cout<<" Already DEAD, can't Repaired none"<<std::endl;
}