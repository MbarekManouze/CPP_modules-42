/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:58:06 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/19 23:37:58 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}

int main(){

    Data *pol = new Data;

    pol->i = 66;
    pol->j = 55;

    uintptr_t u = serialize(pol);

    Data *pel = deserialize(u);

    std::cout << pel->i << std::endl;
    std::cout << pel->j << std::endl;

    return (0);
}