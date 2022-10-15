/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:25:33 by mmanouze          #+#    #+#             */
/*   Updated: 2022/10/14 15:01:21 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

int main(int ac, char **av)
{
    int idx;
    int Q = 1;
    std::string added;
    std::string read;
    std::string word;
    std::string word_rep;

    if (ac != 4)
    {
        std::cout<<"wrong arguments"<<std::endl;
        return (0);
    }
    word = av[2];
    if (word.empty())
    {
        std::cout<<"nothing to replace"<<std::endl;
        return (0);
    }
    word_rep = av[3];
    std::ifstream fred(av[1]);
    if (fred.is_open())
    {
        added = av[1];
        added += ".replace";
        std::ofstream write(added);
        while (!fred.eof())
        {
            if(Q == 0)
                write<<read<<std::endl;        
            getline(fred, read);
            idx = read.find(word);
            while (idx != -1 && word_rep != word)
            {
                idx = read.find(word);
                if (idx == -1)
                    break;
                read.erase(idx, word.length());
                read.insert(idx, word_rep);
            }
            Q = 0;
        }
    }
    else
        std::cout<<"Opening "<<av[1]<<" Failed"<<std::endl;
    return (0);
}
