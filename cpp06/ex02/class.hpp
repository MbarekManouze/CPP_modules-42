/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:21:30 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/18 20:08:03 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

#include "iostream"

class Base{
    public:
        virtual ~Base(){}
};

class A :public Base{
};

class B :public Base{
};

class C :public Base{
};

#endif