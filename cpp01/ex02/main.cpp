/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:11:24 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/22 12:49:18 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{    
    std::string var = "HI THIS IS BRAIN";

    std::string *stringPTR = &var;
    std::string &stringREF = var;

    std::cout<<"******MEMORY ADDRESS*******"<<std::endl<<std::endl;
    std::cout<<"var address: "<<&var<<std::endl;
    std::cout<<"stringPTR address: "<<stringPTR<<std::endl;
    std::cout<<"stringREF address: "<<&stringREF<<std::endl<<std::endl;
    std::cout<<"******VALUE OF EM**********"<<std::endl;
    std::cout<<"var value: "<<var<<std::endl;
    std::cout<<"stringPTR value: "<<*stringPTR<<std::endl;
    std::cout<<"stringREF value: "<<stringREF<<std::endl;
    
}