/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/17 10:51:42 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void f(){

    // Dog a;
    // Dog b;

    // a = b;

    Dog a;
    Dog b = a;
    // int l = 5;
    // int i = 0;

    // Animal *animal[l];
    
    // while (i < l)
    // {
    //     if (i % 2)
    //         animal[i] = new Dog;
    //     else
    //         animal[i] = new Cat;
    //     i++;
    // }
    // i = 0;
    // while (i < l)
    //     delete animal[i++];
}

int main()
{
    f();
    system("leaks polymor");
    return 0;
}