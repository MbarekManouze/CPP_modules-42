/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:03:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/14 15:01:40 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    Bureaucrat beru;
    std::cout << beru << std::endl;
    
    try{
        beru.decrement();
        beru.increment();
        std::cout << beru << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    return (0);

}