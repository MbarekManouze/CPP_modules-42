/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:22:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/14 15:43:59 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
}

const std::string & Weapon::getType(){
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}