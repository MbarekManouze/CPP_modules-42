/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:29:24 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/03 17:56:29 by mmanouze         ###   ########.fr       */
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
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        Fixed &operator+(Fixed const &object);
        Fixed operator-(Fixed const &object);
        Fixed &operator*(Fixed const &object);
        Fixed &operator/(Fixed const &object);
        static Fixed max(Fixed &a, Fixed const &b);
        const static Fixed &max(Fixed const &a, Fixed const &b);       
        static Fixed min(Fixed &a, Fixed const &b);
        const static Fixed &min(Fixed const &a, Fixed const &b);
        int operator>(Fixed const &object)const;
        int operator<(Fixed const &object)const;
        int operator>=(Fixed const &object);
        int operator<=(Fixed const &object);
        int operator==(Fixed const &object);
        int operator!=(Fixed const &object);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void);
        void setRawBits(const int Raw);
};
std::ostream &operator<<(std::ostream &os, Fixed const &object);

#endif