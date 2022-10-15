/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:40:57 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/13 12:16:41 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_Name(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;

    if (N <= 0){
        std::cout<<"N is unacceptable"<<std::endl;
        return (NULL);
    }

    Zombie* zomba = new Zombie[N];

    while (i <= N - 1)
    {
        zomba[i].set_Name(name);
        i++;
    }
    return (zomba);
}