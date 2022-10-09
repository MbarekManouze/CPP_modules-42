/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:44:28 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/09 09:31:29 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zumba("zombie0");
    Zombie *bomba = newZombie("zombie2");

    zumba.announce();
    bomba->announce();
    randomChump("zombie1");

    delete bomba;
    return (0);
}