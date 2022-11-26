/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:04:29 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/25 20:11:24 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
    public :
        using std::stack<T>::c; 
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return(c.begin());
        }
        iterator end()
        {
            return (c.end());
        }
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(MutantStack const &object){(void)object;}
        MutantStack &operator=(MutantStack const &object){(void)object; return (*this);}
};

#endif