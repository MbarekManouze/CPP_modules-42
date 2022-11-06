/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:28:27 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/30 21:29:29 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout<<"FragTrap Default Constructor Called"<<std::endl;
}

FragTrap::FragTrap(std::string name){
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    this->name = name;
    std::cout<<"FragTrap "<<name<<" Copy Constructor Called"<<std::endl;
}

FragTrap::~FragTrap(){
    std::cout<<"FragTrap "<<name<<" Destructor Called"<<std::endl;
}

void FragTrap::attack(const std::string &target){
    std::cout<<"ScavTrap "<<name;
    if (this->Energy_points > 0)
    {
        std::cout<<" attacks "<<target<<" ,causing "<<Attack_damage<<" points of damage!"<<std::endl;
        this->Energy_points--;
    }
    else
        std::cout<<" can't attack "<<target<<std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout<<"High Five my Object friends"<<std::endl;
}