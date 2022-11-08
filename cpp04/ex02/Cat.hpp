/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:51:49 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:27:31 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <new>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain* brain;        
    public:
        Cat();
        Cat(Cat const &object);
        ~Cat();
        Cat &operator=(Cat const &object);
        void makeSound()const;
};


#endif