/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:25:33 by mmanouze          #+#    #+#             */
/*   Updated: 2022/09/24 12:24:36 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// void modify_string(std::string argument, std::string &line)
// {
// }

int main(int ac, char **av)
{
    int idx;
    std::string read;
    std::string word;
    std::string word_rep;

    word = av[3];
    word_rep = av[4];
    std::ifstream fred(av[1]);
    std::ofstream added(av[2]);

    while (!fred.eof())
    {
        getline(fred, read);
        idx = read.find(word);
        if (idx != -1)
        {
            read.erase(idx);
            read.insert(idx, word_rep);
        }
        added<<read<<std::endl;        
    }
    return (0);
}
