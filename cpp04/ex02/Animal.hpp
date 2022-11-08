/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 13:12:47 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <new>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const &object);
        virtual ~Animal();
        virtual void makeSound()const = 0;
        std::string getType()const;
        Animal &operator=(Animal const &object);
};

#endif