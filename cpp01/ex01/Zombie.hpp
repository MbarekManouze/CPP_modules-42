/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:36:34 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/12 13:02:17 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <new>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        void set_Name(std::string name);
};
Zombie* zombieHorde( int N, std::string name );

 #endif