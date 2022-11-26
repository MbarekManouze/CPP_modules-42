/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:38:33 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/22 12:08:54 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>


template <typename T>

void fun(T const &o){
    std::cout << o << std::endl;
}

template <typename T>

void iter(T *arr, int length, void(*fun)(T const &o)){

    int i = 0;

    while (i < length){
        fun(arr[i]);
        i++;
    }
    return ;
}


#endif