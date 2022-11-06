/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:04:17 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/30 22:17:26 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){

    ClapTrap clap("clap");
    ClapTrap clop("clop");
    ScavTrap scav("scav");
    ScavTrap stiv("stive");
    FragTrap fraud("fraud");
    FragTrap fin("fin");
    
    clap.attack("lentrima");
    scav.attack("oussama");
    scav.attack("imad");
    scav.takeDamage(100);
    scav.beRepaired(50);
    fraud.attack("oussama");
    fraud.takeDamage(99);
    fraud.takeDamage(1);
    fraud.highFivesGuys();
}