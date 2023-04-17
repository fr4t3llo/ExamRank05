/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:21:09 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:22:40 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::ASpell(std::string const &_name, std::string const &_effects) : name(_name), effects(_effects){}
ASpell::~ASpell(){}
ASpell::ASpell(ASpell const &obj){
    *this  = obj;
}
ASpell &ASpell::operator=(ASpell const &obj){
    this->name = obj.name;
    this->effects = obj.effects;
    return *this;
}
std::string const & ASpell::getName() const{
    return this->name;
}
std::string const & ASpell::getEffects() const{
    return this->effects;

}
void ASpell::launch(ATarget const &obj) const{
    obj.getHitBySpell(*this);
}