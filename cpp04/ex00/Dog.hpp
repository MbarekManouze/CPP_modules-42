/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:59:37 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:07:12 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        Dog(Dog const &object);
        ~Dog();
        Dog &operator=(Dog const &object);
        void makeSound()const;
};


#endif