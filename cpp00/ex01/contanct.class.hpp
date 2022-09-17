/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contanct.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:42:07 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/15 12:02:48 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# define MAX_CONTACT 8
#include <iostream>
#include <cctype>
#include <cstring>
#include <iomanip>

class contact
{
    private:
        std::string last_Name;
        std::string first_Name;
        std::string nick_Name;
        std::string darkest_Secret;
        std::string phone_Number;
        int idx;
    public:
        void set_lName();
        void set_fName();
        void set_nName();
        void set_pNumber();
        void set_dSecret();
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