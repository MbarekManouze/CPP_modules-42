/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:03:09 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/11 09:21:59 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

        Bureaucrat beru("Vegar", 1);
        std::cout <<  beru << std::endl;
    try{
        beru.increment();
        std::cout << beru << std::endl;
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    return (0);

}