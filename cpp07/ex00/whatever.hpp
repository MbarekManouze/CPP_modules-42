/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:01:50 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/22 11:31:24 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> 

void swap(T &x,T &y)
{
    T z;

    z = x;
    x = y;
    y = z;
}

template <typename T> 

T max(T &x, T &y){
    return ((x > y) ? x : y);
}

template <typename T> 

T min(T &v, T &b){
    return ((v < b) ? v : b);
}

#endif