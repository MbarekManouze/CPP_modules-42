/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:07:31 by mmanouze          #+#    #+#             */
/*   Updated: 2022/11/12 22:39:00 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>


class Intern{
    private:
        std::string name;
        std::string target;
    public:
        Intern();
        ~Intern();
        Intern(std::string name ,std::string target);
        Intern(Intern const & object);
        Intern &operator=(Intern const &object);
        void makeForm(std::string name ,std::string target);
};

#endif