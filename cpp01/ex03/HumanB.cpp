/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:13:07 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/13 15:24:20 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB(){
    std::cout<<name<<" Destructor Called"<<std::endl;
}

void HumanB::attack()
{
    if (this->weapon == NULL)
    {
        std::cout<<"can't attack ,No Weapon setted"<<std::endl;
        return ;
    }
    std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}