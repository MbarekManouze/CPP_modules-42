/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:02:35 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/25 20:07:05 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    this->N = 0;
    this->vec.reserve(0);
}

Span::~Span(){
}

Span::Span(unsigned int N){
    this->N = N;
    vec.reserve(this->N);
}

Span::Span(Span const &object){
    this->vec.reserve(object.N);
    *this = object;
}

Span &Span::operator=(Span const &object){
    if (this != &object){
        this->N = object.N;
        for (size_t i = 0; i < object.vec.size(); i++){
            this->vec[i] = object.vec[i];
        }
    }
    return (*this);
}

void Span::addNumber(size_t number){
    if (this->vec.capacity() <= this->N)
        vec.push_back(number);
    else
        throw Span::ThrowException();
}

int Span::longestSpan(){

    int tmp = 0;
    if (this->vec.size() == 0 || this->vec.size() == 1)
        throw Span::ThrowException();
    std::sort(vec.begin(), vec.end());

    tmp = vec[vec.size() - 1] - vec[0];
    return(tmp);
}

int Span::shortestSpan(){

    int tmp = 0;
    if (this->vec.size() == 0 || this->vec.size() == 1)
        throw Span::ThrowException();
    std::vector<int>::iterator iter;
    
    std::sort(vec.begin(),vec.end());

    for (iter = vec.begin() ;iter != vec.end() ;iter++){
        if (iter ==  vec.begin())
            tmp = *(iter + 1) - *iter;
        if ((*(iter + 1) - *iter) < tmp)
            tmp = *(iter + 1) - *iter;
    }
    
    return(tmp);
}

void Span::better_addnum(int *num, size_t length){
    if (length <= this->N)
        this->vec.insert(this->vec.end(), num, num + length);
    else
        throw Span::ThrowException();
}