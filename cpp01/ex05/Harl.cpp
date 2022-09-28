/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:35:55 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/28 12:04:22 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}

void Harl::info(void){
    std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void){
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void){
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::complain(std::string level){

    int i = 0;
    std::string problems[4]={
        "DEBUG",
        "ERROR",
        "INFO",
        "WARNING"
    };
    void (Harl::*nedel[4])(void)={
        &Harl::debug,
        &Harl::error,
        &Harl::info,
        &Harl::warning
    };
    while (i < 4)
    {
        if (level == problems[i])
            (this->*nedel[i])();
        i++;
    }
}