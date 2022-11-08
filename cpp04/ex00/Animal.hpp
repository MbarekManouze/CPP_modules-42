/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:41:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:08:11 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <new>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const &object);
        WrongAnimal(std::string type);
        WrongAnimal &operator=(WrongAnimal const &object);
        void makeSound()const;
        std::string getType()const;
};

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(Animal const &object);
        Animal &operator=(Animal const &object);
        virtual void makeSound()const;
        std::string getType()const;
};

#endif