/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:29:24 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/28 12:41:10 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int fp_value;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(Fixed& object);
        Fixed &operator=(Fixed &object);
        ~Fixed();
        int getRawBits(void);
        void setRawBits(const int Raw);
};


#endif