/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:21:42 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/25 15:53:53 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <iterator>

template<typename T>
void easyfind(T &v, int number){

    typename T::iterator ptr;

    for (ptr = v.begin(); ptr != v.end() ; ptr++)
    {
        if (*ptr == number)
        {
            std::cout << "found the number" << std::endl;
            return ;
        }
    }
    std::cout << "did not find the index" << std::endl; 
}


#endif