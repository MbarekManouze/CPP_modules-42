/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:50:20 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/22 12:25:07 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


void ft_ok(){

    Array <int> a(5);
    Array <char> b(5);

    b[0] = 'm';
    b[1] = 'b';
    b[2] = 'a';
    b[3] = 'r';
    b[4] = 'k';

    for(int i = 0;i < b.size() ; i++)
        std::cout << b[i] << std::endl;

}

int main(int, char**)
{
    ft_ok();
    system("leaks Array");
    return 0;
}