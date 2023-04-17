/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:19:29 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:20:46 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(std::string const &_name, std::string const &_title) : name(_name) , title(_title){
    std::cout << this->name <<  ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!" << std::endl;
    std::map<std::string , ASpell *>::iterator it = mymap.begin();
    while (it != mymap.end()){
        delete it->second;
        it++;
    }
    mymap.clear();
}
std::string const & Warlock::getName() const{
    return this->name;
}
std::string const & Warlock::getTitle() const{
    return this->title;
}
void Warlock::setTitle(std::string const &_title){
    this->title = _title;
}
void Warlock::introduce() const{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}
void Warlock::learnSpell(ASpell *ptr){
    if (ptr)
        mymap.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}
void Warlock::forgetSpell(std::string name){
    std::map<std::string , ASpell *>::iterator fd = mymap.find(name);
    if (fd != mymap.end())
    {
        delete fd->second;
    }
    mymap.erase(name);   
}
void Warlock::launchSpell(std::string name, ATarget const &obj){
    ASpell *ptr = mymap[name];
    if (ptr)
        ptr->launch(obj);
}