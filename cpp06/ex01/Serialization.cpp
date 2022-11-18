/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:58:06 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/18 10:44:19 by mmanouze         ###   ########.fr       */
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

    Data pol;
    uintptr_t a = 5;

    std::cout << "pol at first : " << &pol << std::endl;
    // std::cout << "a at first : " <<&a << std::endl;

    uintptr_t u = serialize(&pol);

    std::cout << "u after conversion : " << &u << std::endl;

    Data *pel = deserialize(u);

    // std::cout << "pel after conversion : " <<&pol << std::endl;
    std::cout << "pel after conversion : " << &(*pel) << std::endl;

}