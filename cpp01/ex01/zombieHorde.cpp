/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:40:57 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/22 10:10:30 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie* zomba = new Zombie[N];

    i = 0;
    while (i <= N - 1)
    {
        zomba[i].set_name(name);
        i++;
    }
    return (zomba);
}