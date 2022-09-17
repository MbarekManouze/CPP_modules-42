/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:10:56 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/17 10:43:11 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <cctype>
#include "contanct.class.hpp"
#include <cstring>
#include <iomanip>
#include <limits>
#include <string>

class phonebook
{
    private:
        contact arr[8];
    public:
        void _phonebook(int &c);
        void sphonebook();
        void display_search();
        void save_contact(contact contact, int c);
        std::string limit(std::string var);
};

#endif
