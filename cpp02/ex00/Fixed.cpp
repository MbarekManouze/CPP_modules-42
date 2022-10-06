/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:34:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/28 15:25:36 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fp_value(0){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed& object){
    std::cout<<"Copy constructor called"<<std::endl;
    this->fp_value = object.fp_value;
    *this = object;
}

Fixed &Fixed::operator=(Fixed& object){
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->fp_value = object.fp_value;
    this->getRawBits();
    return (*this);
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void){
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->fp_value);
}

void Fixed::setRawBits(const int Raw){
    this->fp_value = Raw;
}