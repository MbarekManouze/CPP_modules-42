/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:25:14 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/08 10:54:29 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP


#include <iostream>
#include <new>

class Brain{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(Brain const &object);
        Brain &operator=(Brain const &object);
};


#endif