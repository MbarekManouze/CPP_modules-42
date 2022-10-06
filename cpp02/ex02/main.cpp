/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 08:41:23 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/04 10:55:50 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) {

    float aa = 0;
    Fixed a(aa);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

// int main()
// {
//     float i = 1;

//     i = float(i) / ( 1 << 8);
//     std::cout<<i<<std::endl;
//     // i++;
//     // i = float(i) /  float(1 << 8);
//     // std::cout<<i<<std::endl;
//     // i++;
//     // // i /= 2;
//     // std::cout<<i<<std::endl;
//     return (0);
// }