/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:26:12 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:26:13 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <map>
#include "ASpell.hpp"
class SpellBook
{
    private:
        SpellBook(SpellBook const &obj);
        SpellBook & operator=(SpellBook const &obj);
        std::map<std::string , ASpell *> mymap;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *ptr);
        void forgetSpell(std::string const &obj);
        ASpell* createSpell(std::string const &obj);
};