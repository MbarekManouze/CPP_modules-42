/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:34:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/25 11:56:43 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():fp_value(0){
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int i){
    std::cout<<"Int constructor called"<<std::endl;
    this->setRawBits(i);
}

Fixed::Fixed(const float p){
    std::cout<<"Float constructor called"<<std::endl;
    this->fp_value = roundf(p * (1 << this->bits));
}

Fixed::Fixed(Fixed const &object){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = object;
}

Fixed &Fixed::operator=(Fixed const &object){
    if (this != &object)
    {
        std::cout<<"Copy assignment operator called"<<std::endl;
        this->fp_value = object.fp_value;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &object){
    os<<object.toFloat();
    return os;
}

Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
}

float Fixed::toFloat(void)const{
    return (float(this->fp_value) / (1 << this->bits));
}

int Fixed::toInt(void)const{
    return (this->fp_value >> this->bits);
}

int Fixed::getRawBits(void)const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->fp_value);
}

void Fixed::setRawBits(const int Raw){
    this->fp_value = roundf(Raw << this->bits);
}