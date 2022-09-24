/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:13:07 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/23 10:12:31 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}