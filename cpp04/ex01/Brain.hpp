/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:25:14 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/04 10:44:18 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP


#include <iostream>
#include <new>

class Brain{
    public:
        std::string ideas[100];
        Brain(){std::cout << "Brain Constructor Called" <<std::endl;}
        ~Brain(){std::cout << "Brain Destructor Called" << std:: endl;}
};


#endif