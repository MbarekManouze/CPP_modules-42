/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:19:37 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/25 20:07:45 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>


class Span{
    private :
        size_t N;
        std::vector<int> vec;
    public :
        Span();
        ~Span();
        Span(unsigned int N);
        Span(Span const &object);
        Span &operator=(Span const &objec);
        int shortestSpan();
        int longestSpan();
        void addNumber(size_t number);
        class ThrowException : std::exception{
            public:
                const char * what() const throw(){
                    return ("an error has occurred");   
                }
        };
        void better_addnum(int *num, size_t length);
};

#endif