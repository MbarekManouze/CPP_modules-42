/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:34:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/22 19:45:11 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fp_value(0),bits(8){
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int i):bits(8){
    this->setRawBits(i);
}

Fixed::Fixed(const float p):bits(8){
    this->fp_value = roundf(p * (1 << this->bits));
}

Fixed::Fixed(Fixed const &object):bits(8){
    this->fp_value = object.fp_value;
}

int Fixed::getRawBits(void)const{
    return (this->fp_value);
}

void Fixed::setRawBits(const int Raw){
    this->fp_value = roundf(Raw << this->bits);
}

float Fixed::toFloat(void)const{
    return (float(this->fp_value) / (1 << this->bits));
}

int Fixed::toInt(void)const{
    return int(this->fp_value >> this->bits);
}

Fixed &Fixed::operator=(Fixed const &object){
    if (this != &object)
        this->fp_value = object.fp_value;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Fixed const &object){
    os<<object.toFloat();
    return os;
}

Fixed &Fixed::operator++(){
    this->fp_value++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed a;
    a.fp_value = this->fp_value;
    this->fp_value++;
    return (a);
}

Fixed &Fixed::operator--(){
    this->fp_value--;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed a;
    a.fp_value = this->fp_value;
    this->fp_value--;
    return (a);
}

const Fixed Fixed::operator+(Fixed const &object)const{
    Fixed a;
    a.fp_value = this->fp_value;
    a.fp_value += object.fp_value;
    return(a);
}

const Fixed Fixed::operator-(Fixed const &object)const{
    Fixed a;
    a.fp_value = this->fp_value;
    a.fp_value -= object.fp_value;
    return (a);
}

const Fixed Fixed::operator*(Fixed const &object)const{
    Fixed a;
    a.fp_value = this->fp_value;
    a.fp_value *= object.fp_value;
    a.fp_value = a.fp_value >> this->bits;
    return (a);
}

const Fixed Fixed::operator/(Fixed const &object)const{
    Fixed a;
    a.fp_value = this->fp_value;
    a.fp_value /= object.fp_value;
    a.fp_value = a.fp_value << this->bits;
    return (a);
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


Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
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
