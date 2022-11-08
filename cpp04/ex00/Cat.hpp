/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:51:49 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:12:12 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        WrongCat(WrongCat const &object);
        ~WrongCat();
        WrongCat &operator=(WrongCat const &object);
        void makeSound()const;
};

class Cat: public Animal{
    public:
        Cat();
        Cat(Cat const &object);
        ~Cat();
        Cat &operator=(Cat const &object);
        void makeSound()const;
};


#endif