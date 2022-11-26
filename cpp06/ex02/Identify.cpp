/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:25:49 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/20 01:01:28 by mmanouze         ###   ########.fr       */
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
    
    A *a = NULL;
    B *b = NULL;
    C *c = NULL;

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
        std::cout << "NO successful cast" << std::endl;
}

void identify(Base& p){

    int i = 0;

    try{
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl; 
    }
    catch(std::bad_cast &e){i++;}
    try{
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl; 
    }
    catch(std::bad_cast &e){i++;}
    try{
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl; 
    }
    catch(std::bad_cast &e){i++;}
    if (i ==3)
        std::cout << "NO successful cast" << std::endl; 
}

void ft_ok(){

    Base *a = generate();
    B b;

    identify(a);
    identify(b);

    delete a;
}

int main()
{
    ft_ok();
    return(0);
}
