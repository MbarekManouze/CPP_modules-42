/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:10:58 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/17 11:17:31 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include "contanct.class.hpp"

void phonebook::save_contact(contact contact ,int c)
{
    this->arr[c] = contact;
}

std::string phonebook::limit(std::string var)
{
    if (var.length() >= 10)
        return (var.substr(0, 9) + '.');
    else
        return (var);
}

void phonebook::display_search()
{
    int j = 0;
    int k;
    std::string s;
    contact Contact;
    class contact find;

    if (i == 0)
    {
        std::cout<<"Empty Contact"<<std::endl;
        return ;
    }
    std::cout<<" ---------- ---------- ---------- ---------- "<<std::endl;
    std::cout<<"|  INDEX   |  f.name  |  l.name  | nickname |"<<std::endl;
    std::cout<<" ---------- ---------- ---------- ---------- "<<std::endl;
    while (j < i)
    {
        Contact = this->arr[j];
        std::cout<<"|"<<std::setw(10);
        std::cout<<Contact.get_index()<<std::right<<std::ends;
        std::cout<<"|"<<std::setw(10);
        std::cout<<limit(Contact.get_fName())<<std::right<<std::ends;
        std::cout<<"|"<<std::setw(10);
        std::cout<<limit(Contact.get_lName())<<std::right<<std::ends;
        std::cout<<"|"<<std::setw(10);
        std::cout<<limit(Contact.get_nick())<<"|"<<std::ends;
        std::cout<<std::endl;
        j++;
    }
    std::cout<<"ENTER AN INDEX: "<<std::ends;
    getline(std::cin, s);
    k = atoi(s.c_str());
    if (k > i || k > 8 || k <= 0)
    {
        std::cin.clear();
        std::cout<<"SORRY ,NO SUCH INDEX \n"<<std::ends;
    }
    else
    {
        find = this->arr[k - 1];
        std::cout<<"LAST NAME: "<<find.get_lName()<<std::endl;
        std::cout<<"FIRST NAME: "<<find.get_fName()<<std::endl;
        std::cout<<"NICK NAME: "<<find.get_nick()<<std::endl;
        std::cout<<"DARKEST SECRET: "<<find.get_dSecret()<<std::endl;
        std::cout<<"PHONE NUMBER: "<<find.get_pNumber()<<std::endl;
    }
}

void phonebook::sphonebook()
{
    display_search();
}

void phonebook::_phonebook(int &c)
{
    contact contact;

    contact.set_lName();
    contact.set_fName();
    contact.set_nName();
    contact.set_dSecret();
    contact.set_pNumber();
    contact.cord(c);
    this->save_contact(contact ,c);
    c++;
    if (i != MAX_CONTACT)
        i++;
    if (c == MAX_CONTACT) 
        c = 0;
}

void contact::cord(int c)
{
    this->idx = c + 1;
}

std::string contact::get_nick()
{
    return(this->nick_Name);
}

int contact::get_index()
{
    return(this->idx);
}

std::string contact::get_lName()
{
    return(this->last_Name);
}

std::string contact::get_fName()
{
    return(this->first_Name);
}

std::string contact::get_nName()
{
    return(this->nick_Name);
}

std::string contact::get_dSecret()
{
    return(this->darkest_Secret);
}

std::string contact::get_pNumber()
{
    return(this->phone_Number);
}

void contact::set_fName()
{
    std::cout<<"FIRST NAME: "<<std::ends;
    getline(std::cin, this->first_Name);
}

void contact::set_nName()
{
    std::cout<<"NICK NAME: "<<std::ends;
    getline(std::cin, this->nick_Name);
}

void contact::set_dSecret()
{
    std::cout<<"DARKEST SECRET: "<<std::ends;
    getline(std::cin, this->darkest_Secret);
}

void contact::set_lName()
{
    std::cout<<"LAST NAME: "<<std::ends;
    getline(std::cin, this->last_Name);
}

void contact::set_pNumber()
{
    std::cout<<"PHONE NUMBER: "<<std::ends;
    getline(std::cin, this->phone_Number);
}

int main()
{
    phonebook doc;
    std::string str;
    int c = 0;
    i = 0;

    while (1)
    {
        std::cout<<"enter something :"<<std::ends;
        getline(std::cin,str);
        if (!strcmp(str.c_str(), "ADD"))
        {
            // std::cout<<"okkk"<<std::endl;
            doc._phonebook(c);
        }
        else if (!strcmp(str.c_str(), "SEARCH"))
        {
            doc.sphonebook();
        }
    }
}