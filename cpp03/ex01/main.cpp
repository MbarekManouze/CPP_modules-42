/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/30 22:08:07 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

    ScavTrap Elly("Elly");
    ClapTrap mbarek("mbarek");
    ClapTrap Ragnar("Ragnar");
    ClapTrap Ecbeart("Ecbeart");

    Elly.attack("mbarek");
    Elly.attack("Ragnar");
    Elly.attack("Ecbeart");
    Ragnar.attack("Elly");
    Ragnar.takeDamage(10);
    Elly.takeDamage(160);
    Elly.takeDamage(1);
    Elly.beRepaired(50);
    Elly.guardGate();
}