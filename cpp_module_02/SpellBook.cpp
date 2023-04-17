/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:25:54 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:26:08 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){
    std::map<std::string , ASpell *>::iterator it = mymap.begin();
    while (it != mymap.end())
    {
        delete it->second;
        it++;
    }
    mymap.clear();
}
void SpellBook::learnSpell(ASpell *ptr){
     if (ptr)
        mymap.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}
void SpellBook::forgetSpell(std::string const &obj){
    std::map<std::string , ASpell *>::iterator fd = mymap.find(obj);
    if (fd != mymap.end())
    {
        delete fd->second;
    }
    mymap.erase(obj);
}
ASpell* SpellBook::createSpell(std::string const &obj){
    std::map<std::string, ASpell *>::iterator it = mymap.find(obj);
    if (it != mymap.end())
    {
        return mymap[obj];
    }
    return NULL;
}