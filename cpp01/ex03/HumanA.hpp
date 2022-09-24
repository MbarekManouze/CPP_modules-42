/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:59:21 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/23 10:07:39 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon& weapon;
    public:
        // HumanA();
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif