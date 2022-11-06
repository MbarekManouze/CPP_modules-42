/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:29:24 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/25 10:58:44 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fp_value;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float p);
        Fixed(Fixed const &object);
        ~Fixed();
        Fixed &operator=(Fixed const &object);
        float toFloat(void)const;
        int toInt(void)const;
        int getRawBits(void)const;
        void setRawBits(const int Raw);
};
std::ostream &operator<<(std::ostream &os, Fixed const &object);

#endif