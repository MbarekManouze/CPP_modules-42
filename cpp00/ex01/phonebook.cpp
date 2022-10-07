/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:10:58 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/07 11:18:44 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void check_input(std::string &inpt, std::string msg){
    while (inpt.empty()){
        std::cout<<msg<<std::ends;
        getline(std::cin, inpt);
        if (!inpt.empty())
            break ;
    }
    return ;
}

void phonebook::save_contact(contact contact ,int c)
{
    this->contacts[c] = contact;
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
        Contact = this->contacts[j];
        std::cout<<"|"<<std::setw(10);
        std::cout<<Contact.get_index()<<std::ends;
        std::cout<<"|"<<std::setw(10);
        std::cout<<limit(Contact.get_fName())<<std::ends;
        std::cout<<"|"<<std::setw(10);
        std::cout<<limit(Contact.get_lName())<<std::ends;
        std::cout<<"|"<<std::setw(10);
        std::cout<<limit(Contact.get_nick())<<"|"<<std::ends;
        std::cout<<std::endl;
        j++;
    }
    std::cout<<"ENTER AN INDEX: "<<std::ends;
    getline(std::cin, s);
    if (std::cin.eof())
        exit(0);
    k = atoi(s.c_str());
    if (k > i || k > 8 || k <= 0)
        std::cout<<"SORRY ,NO SUCH INDEX \n"<<std::ends;
    else
    {
        Contact = this->contacts[k - 1];
        std::cout<<"LAST NAME: "<<Contact.get_lName()<<std::endl;
        std::cout<<"FIRST NAME: "<<Contact.get_fName()<<std::endl;
        std::cout<<"NICK NAME: "<<Contact.get_nick()<<std::endl;
        std::cout<<"DARKEST SECRET: "<<Contact.get_dSecret()<<std::endl;
        std::cout<<"PHONE NUMBER: "<<Contact.get_pNumber()<<std::endl;
    }
}

void phonebook::sphonebook()
{
    display_search();
}

void phonebook::_phonebook(int &c)
{
    contact contact;
    std::string inpt;

    std::cout<<"LAST NAME: "<<std::ends;
    getline(std::cin, inpt);
    contact.set_lName(inpt);
    std::cout<<"FIRST NAME: "<<std::ends;
    getline(std::cin, inpt);
    contact.set_fName(inpt);
    std::cout<<"NICK NAME: "<<std::ends;
    getline(std::cin, inpt);
    contact.set_nName(inpt);
    std::cout<<"DARKEST SECRET: "<<std::ends;
    getline(std::cin, inpt);
    contact.set_dSecret(inpt);
    std::cout<<"PHONE NUMBER: "<<std::ends;
    getline(std::cin, inpt);
    contact.set_pNumber(inpt);
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


void contact::set_fName(std::string fname)
{
    this->first_Name = fname;
    if (std::cin.eof())
        exit(1);
    check_input(this->first_Name, "FIRST NAME: ");
}

void contact::set_nName(std::string nname)
{
    this->nick_Name = nname;
    if (std::cin.eof())
        exit(1);   
    check_input(this->nick_Name, "NICK NAME: ");
}

void contact::set_dSecret(std::string dsecret)
{
    this->darkest_Secret = dsecret;
    if (std::cin.eof())
        exit(1);
    check_input(this->darkest_Secret, "DARKEST SECRET: ");
}

void contact::set_lName(std::string lname)
{
    this->last_Name = lname;
    if (std::cin.eof())
        exit(1);
    check_input(this->last_Name, "LAST NAME: ");
}

void contact::set_pNumber(std::string pnumber)
{
    this->phone_Number = pnumber;
    if (std::cin.eof())
        exit(1);
    check_input(this->phone_Number, "PHONE NUMBER: ");
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
        if (str == "ADD")
            doc._phonebook(c);
        else if (str == "SEARCH")
            doc.sphonebook();
        else if(str =="EXIT" || std::cin.eof())
            exit(0);
    }
}