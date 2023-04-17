/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:23:02 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:23:22 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
ATarget::ATarget(){}
ATarget::ATarget(ATarget const &obj){
    *this = obj;
}
ATarget &ATarget::operator=(ATarget const &obj){
    this->type = obj.type;
    return *this;
}
ATarget::ATarget(std::string const &_type) : type(_type){}
ATarget::~ATarget(){}
std::string const & ATarget::getType() const{
    return this->type;
}
void ATarget::getHitBySpell(ASpell const &obj) const{
    std::cout << this->type << " has been " << obj.getEffects() << "!" << std::endl;
}