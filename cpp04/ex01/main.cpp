/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/04 14:15:47 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int l = 20;
    int i = 0;

    Animal *hayawan[l];
    
    while (i < l)
    {
        hayawan[i++] = new Dog;
        hayawan[i++] = new Cat;
    }

    
    return 0;
}