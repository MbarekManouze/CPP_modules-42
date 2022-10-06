/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:34:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/04 10:55:37 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fp_value(0){
}

Fixed::Fixed(const int i){
    this->fp_value = i << this->bits;
}

Fixed::Fixed(const float p){
    this->fp_value = roundf(p * (1 << this->bits));
}

Fixed::Fixed(Fixed const &object){
    this->fp_value = object.fp_value;
}

Fixed &Fixed::operator=(Fixed const &object){
    this->fp_value = object.fp_value;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &object){
    os<<object.toFloat();
    return os;
}

Fixed Fixed::operator++(){
    Fixed a;
    // std::cout<<"heeere"<<std::endl;
    this->fp_value++;
    // if (!this->fp_value)
    //     this->fp_value = 1;
    a.fp_value = this->fp_value;
    return (a);
}

Fixed Fixed::operator++(int){
    Fixed a;

    a.fp_value = this->fp_value;
    this->fp_value++;
    // this->fp_value *= 2;
    return (a);
}

Fixed Fixed::operator--(){
    Fixed a;

    if (!this->fp_value)
        this->fp_value = 1;
    a.fp_value = this->fp_value;
    return (a);
}

Fixed Fixed::operator--(int){
    Fixed a;

    a.fp_value = this->fp_value;
    this->fp_value /= 2;
    return (a);
}

Fixed &Fixed::operator+(Fixed const &object){
    this->fp_value += object.fp_value;
    return(*this);
}

Fixed Fixed::operator-(Fixed const &object){
    this->fp_value -= object.fp_value;
    return (*this);
}

Fixed &Fixed::operator*(Fixed const &object){
    this->fp_value *= object.fp_value;
    this->fp_value = this->fp_value / (1 << 8);
    return (*this);
}

Fixed &Fixed::operator/(Fixed const &object){
    this->fp_value /= object.fp_value;
    return (*this);
}

int Fixed::operator>(Fixed const &object)const{
    return(this->fp_value > object.fp_value);
}

int Fixed::operator<(Fixed const &object)const{
    return (this->fp_value < object.fp_value);
}

int Fixed::operator>=(Fixed const &object){
    return (this->fp_value >= object.fp_value);
}

int Fixed::operator<=(Fixed const &object){
    return (this->fp_value <= object.fp_value);
}

int Fixed::operator==(Fixed const &object){
    return (this->fp_value == object.fp_value);
}

int Fixed::operator!=(Fixed const &object){
    return (this->fp_value != object.fp_value);
}

Fixed::~Fixed(){
    // std::cout<<"Destructor called"<<std::endl;
}

float Fixed::toFloat(void)const{
    // std::cout << "a;ami " << this->fp_value << std::endl;
    return (float(this->fp_value) / (1 << this->bits));
}

int Fixed::toInt(void)const{
    return int(this->fp_value >> this->bits);
}

Fixed Fixed::max(Fixed &a, Fixed const &b){
    if (a > b)
        return (a);
    return (b);
}

Fixed Fixed::min(Fixed &a, Fixed const &b){
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b){
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b){
    if (a < b)
        return (a);
    return (b);
}

// int Fixed::getRawBits(void){
//     std::cout<<"getRawBits member function called"<<std::endl;
//     return (this->fp_value);
// }

// void Fixed::setRawBits(const int Raw){
//     this->fp_value = roundf(Raw * (1  << this->bits));
// }