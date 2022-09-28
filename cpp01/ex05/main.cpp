/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:33:02 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/25 12:07:29 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl heerl;

    std::cout<<"DEBUG"<<std::endl;
    heerl.complain("DEBUG");
    std::cout<<"INFO"<<std::endl;
    heerl.complain("INFO");
    std::cout<<"WARNING"<<std::endl;
    heerl.complain("WARNING");
    std::cout<<"ERROR"<<std::endl;
    heerl.complain("ERROR");
}