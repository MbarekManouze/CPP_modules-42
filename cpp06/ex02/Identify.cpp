/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:25:49 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/18 23:03:49 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"


Base * generate(void){
    
    int i = time(NULL) % 3;

    if (i == 0)
        return (new A());
    else if (i == 1)
        return (new B());
    else if (i == 2)
        return (new C());
    return (NULL);
}

void identify(Base *p){
    
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);

    if (a != NULL)
        std::cout << "A" << std::endl;
    else if (b != NULL)
        std::cout << "B" << std::endl;
    else if (c != NULL)
        std::cout << "C" << std::endl;
    else
        std::cout << "walooo waloooo" << std::endl;
}

void identify(Base& p){

    int i = 0;

    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl; 
    }
    catch(std::bad_cast &e){i++;}
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl; 
    }
    catch(std::bad_cast &e){i++;}
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl; 
    }
    catch(std::bad_cast &e){i++;}
    if (i ==3)
        std::cout << "waloooo waloooo" << std::endl; 
}

int main()
{
    Base a;

    identify(&a);
    identify(a);

}



