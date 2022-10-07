/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:42:07 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/07 15:16:25 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define MAX_CONTACT 8
#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string last_Name;
        std::string first_Name;
        std::string nick_Name;
        std::string darkest_Secret;
        std::string phone_Number;
        int idx;
    public:
        void set_lName(std::string lname);
        void set_fName(std::string fname);
        void set_nName(std::string nname);
        void set_pNumber(std::string pnumber);
        void set_dSecret(std::string dsecret);
        std::string get_lName();
        std::string get_fName();
        std::string get_nName();
        std::string get_dSecret();
        std::string get_nick();
        std::string get_pNumber();
        int get_index();
        void cord(int c);
};

int i;

#endif