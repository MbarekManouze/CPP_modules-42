/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/04 18:04:06 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

    ClapTrap mbarek("mbarek");
    ClapTrap Ragnar("Ragnar");
    ClapTrap Ecbeart("Ecbeart");
    ScavTrap Elly("Elly");

    Elly.attack("mbarek");
    Elly.attack("Ragnar");
    Elly.attack("Ecbeart");
    Ragnar.attack("Elly");
    Elly.takeDamage(99);
    Elly.takeDamage(2);
    Elly.beRepaired(50);
    Elly.guardGate();
}