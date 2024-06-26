/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:44:28 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/14 11:35:39 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zumba("zombie0");
    Zombie *bomba = newZombie("zombie2");

    zumba.announce();
    randomChump("zombie1");
    bomba->announce();

    delete bomba;
 
    return (0);
}