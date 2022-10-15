/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:40:45 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/14 10:17:56 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout<<"Default Constructor Called"<<std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie(){
    std::cout<<this->name<<" has been destroyed"<<std::endl;
}
void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}