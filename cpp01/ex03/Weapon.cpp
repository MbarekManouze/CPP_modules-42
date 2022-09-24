/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:22:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/23 10:04:34 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){}

const std::string & Weapon::getType(){
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}