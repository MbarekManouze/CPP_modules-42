/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:51:49 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/08 18:58:04 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat &operator=(Cat &object);
        void makeSound()const;
};


#endif