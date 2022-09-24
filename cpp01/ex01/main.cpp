/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:40:26 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/22 10:09:47 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 5;
    Zombie *db = zombieHorde(N, "mbarek");

    int i = 0;
    while (i < N)
    {
         db[i].announce();
         i++;
    }

    delete []db;
    
    return (0);
}