/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:14:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/19 12:42:49 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <new>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie(){}
        Zombie(std::string name){
            this->name = name;
        }
        ~Zombie(){
            std::cout<<this->name<<" died"<<std::endl;
        }
        void announce(void);
};
void randomChump( std::string name );   
Zombie* newZombie( std::string name );

#endif