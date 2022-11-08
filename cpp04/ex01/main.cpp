/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:25:46 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void f(){

    int l = 5;
    int i = 0;

    Animal *animal[l];
    
    while (i < l)
    {
        if (i % 2)
            animal[i] = new Dog;
        else
            animal[i] = new Cat;
        i++;
    }
    i = 0;
    while (i < l)
        delete animal[i++];
}

int main()
{
    f();
    return 0;
}