/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:00:08 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/23 10:15:12 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// HumanA::HumanA() : weapon(weapon){}

HumanA::HumanA(std::string name, Weapon &weapon)  : weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
}