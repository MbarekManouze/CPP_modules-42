/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:44:32 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/09 09:37:24 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout<<"Zombie Default Constructor Called"<<std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout<<"Zombie "<<name<<" Copy Constructor Called"<<std::endl;
}

Zombie::~Zombie(){
    std::cout<<"Zombie "<<name<<" Died"<<std::endl;
}

void Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie* newZombie(std::string name)
{
    Zombie* bb = new Zombie(name);
    return (bb);
}
