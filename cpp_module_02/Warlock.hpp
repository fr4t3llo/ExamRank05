/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:27:18 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:27:26 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string , ASpell *> mymap;

        SpellBook book;
    public:
        Warlock();
        Warlock(std::string const &_name, std::string const &_title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;

        void setTitle(std::string const &_title);

        void introduce() const;
        
        void learnSpell(ASpell *ptr);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget const &obj);
};