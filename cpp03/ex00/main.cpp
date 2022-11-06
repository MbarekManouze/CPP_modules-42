/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:16:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/30 18:14:16 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

    ClapTrap mbarek("mbarek");
    ClapTrap Ragnar("Ragnar");
    ClapTrap Ecbeart("Ecbeart");

    mbarek.attack("Ragnar");
    mbarek.attack("Ecbeart");
    mbarek.attack("Ragnar");
    mbarek.attack("Ecbeart");
    mbarek.attack("Ragnar");
    mbarek.attack("Ecbeart");
    mbarek.attack("Ragnar");
    mbarek.attack("Ecbeart");
    mbarek.attack("Ragnar");
    mbarek.attack("Ecbeart");
    mbarek.attack("Ragnar");
    mbarek.attack("Ecbeart");
    mbarek.takeDamage(10);
    mbarek.takeDamage(20);
    mbarek.beRepaired(50);
}