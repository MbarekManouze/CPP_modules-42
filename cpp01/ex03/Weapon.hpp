/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:51:36 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/22 15:51:48 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string & getType();
        void setType(std::string type);
};

#endif