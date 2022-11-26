/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:31:34 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/22 15:59:53 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


# include <iostream>

template<class T>
class Array{
    private :
        T *elements;
        int b;
    public :
        Array(){
            this->b = 10;
            this->elements = new T[b];
        }
        ~Array(){
            delete [] this->elements;
        }
         Array(unsigned int n){
            {
                int * a = new int();
                std::cout << *a << std::endl;
                delete a;
            }
            this->b = n;
            this->elements = new T[n]();
        }
        Array(Array const &object){
            this->elements = NULL;
            *this = object;
        }
        Array &operator=(Array const &object){
            if (this != &object){
                this->b = object.b;
                if (!this->elements)
                {
                    this->elements = new T[object.b];
                    for (int i = 0; i < object.b; i++)
                        this->elements[i] = object.elements[i];
                }
                else
                {
                    delete [] this->elements;
                    this->elements = new T[object.b];
                    for (int i = 0; i < object.b; i++)
                        this->elements[i] = object.elements[i];
                }
            }
            return (*this);
        }
        T &operator[](int i){
            if (i <= (this->b - 1) && i >= 0)
                return this->elements[i];
            else
                throw exception();
        }
        class exception : public std::exception{
            public :
                const char * what() const throw(){
                    return "a mistake occured";
                }
        };
        int size()const{
            return (this->b);
        }
};

#endif