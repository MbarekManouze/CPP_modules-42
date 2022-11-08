/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:38 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 22:36:01 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

void f()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j; 
    delete meta;
}

int main()
{
    f();

    WrongAnimal *Wanimal = new WrongCat();
    WrongAnimal *Wcat = new WrongAnimal();

    Wanimal->makeSound();
    Wcat->makeSound();

    delete Wanimal;
    delete Wcat;

    return 0;
}