/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:10:56 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/07 11:16:13 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class phonebook
{
    private:
        contact contacts[8];
    public:
        void _phonebook(int &c);
        void sphonebook();
        void display_search();
        void save_contact(contact contact, int c);
        std::string limit(std::string var);
};

#endif
