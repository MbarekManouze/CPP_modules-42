/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:30:02 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/22 12:08:13 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main() {

    std::string array[6] = {"mbarek","tafoukt","ayour","robin hood", "Shanks" ,"Monkey.D.Dragon"};

    iter(array, 6, fun);

    return 0;
}
